/*
** check_file.c for check_file in /home/masson_k/allum1-2017-masson_k
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Sun Feb 17 10:40:01 2013 masson_k
** Last update Sun Feb 17 19:24:06 2013 masson_k
*/

#include	<stdlib.h>
#include	"allum1.h"

void	check_file(t_param *param)
{
  int	x;

  x = 0;
  if (my_strlen_line(param->allum.pars[0]) != 1)
    exit (1);
  if (my_strlen_line(param->allum.pars[1]) != 3)
    exit (1);
  if (my_strlen_line(param->allum.pars[2]) != 5)
    exit (1);
  if (my_strlen_line(param->allum.pars[3]) != 7)
    exit (1);
  while (x < 4)
    {
      if (param->allum.pars[x][0] != ' ' && param->allum.pars[x][1] != ' ')
	exit (1);
      x++;
    }
}
