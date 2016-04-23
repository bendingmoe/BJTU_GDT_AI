/*
** allum1.c for allum1 in /home/masson_k/epitech/allum1
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Mon Feb  4 15:38:41 2013 masson_k
** Last update Sun Feb 17 10:44:14 2013 masson_k
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"allum1.h"

void	check_final(t_param *param)
{
  int	e;
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (k < 4)
    {
      e = 0;
      while (param->allum.pars[k][e])
	{
	  if (param->allum.pars[k][e] == '|')
	    i++;
	  e++;
	}
      k++;
    }
  if (i == 0)
    param->final = 1;
}

int	check_match(t_param *param)
{
  int	e;
  int	i;

  e = 0;
  i = 0;
  while (param->allum.pars[param->allum.y_allum - 1][e])
    {
      e++;
      if (param->allum.pars[param->allum.y_allum - 1][e] == '|')
	i++;
    }
  if (i == 0)
    return (1);
  else
    return (0);
}

void	erase_allum(t_param *param)
{
  int	e;
  int	i;

  e = 0;
  i = 0;
  if (param->allum.nb_allum >= 12 || param->allum.nb_allum <= 0)
    {
      param->allum.pars[param->allum.y_allum - 1][0] = ' ';
      param->allum.pars[param->allum.y_allum - 1][1] = ' ';
    }
  else
    {
      while (param->allum.pars[param->allum.y_allum - 1][e] != '|')
	e++;
      while (i <= (e + param->allum.nb_allum) - 1)
	{
	  param->allum.pars[param->allum.y_allum - 1][i] = ' ';
	  i++;
	}
    }
}

int	main(int ac, char **av)
{
  t_param	param;

  select_mode(&param);
  param.player = 0;
  param.final = 0;
  param.allum.pars = parsallum(av[1], &param);
  check_file(&param);
  display_allum(&param);
  if (param.mode == 1)
    mode_one(&param);
  else if (param.mode == 2)
    mode_two(&param);
}
