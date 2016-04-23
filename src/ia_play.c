/*
** ia_play.c for ia_play in /home/masson_k/epitech/allum1
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Wed Feb 13 13:59:39 2013 masson_k
** Last update Sun Feb 17 10:33:32 2013 masson_k
*/

#include	<stdlib.h>
#include	"allum1.h"

void	param_number(t_param *param)
{
  erase_allum(param);
  display_allum(param);
  check_final(param);
  if (param->final == 1)
    {
      my_putstr("You're a winner!\n\n");
      exit(1);
    }
  param->player = 0;
}

int	other_param(t_param *param)
{
  check_zero(param);
  check_max(param);
  if ((param->line.check % 2) == 0)
    {
      param_number(param);
      return (0);
    }
  else
    {
      param->allum.nb_allum = param->allum.nb_allum - 1;
      erase_allum(param);
      display_allum(param);
      check_final(param);
      if (param->final == 1)
	{
	  my_putstr("You're a winner!\n\n");
	  exit(1);
	}
      param->player = 0;
      return (0);
    }
}

int	final_param(t_param *param)
{

  almost_final(param);
  erase_allum(param);
  display_allum(param);
  check_final(param);
  if (param->final == 1)
    {
      my_putstr("You're a winner!\n\n");
      exit(1);
    }
  param->player = 0;
  return (0);
}
