/*
** error.c for error in /home/masson_k/epitech/allum1
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Tue Feb 12 10:45:55 2013 masson_k
** Last update Sun Feb 17 10:33:12 2013 masson_k
*/

#include	"allum1.h"

void	error_line(t_param *param)
{
  my_putstr("Specify an available line.\n\n");
  display_allum(param);
  if (param->player == 0)
    player_one(param);
  else if (param->player == 1)
    player_two(param);
}

void	error_empty(t_param *param)
{
  my_putstr("Specify a line which isn't empty.\n\n");
  display_allum(param);
  if (param->player == 0)
    player_one(param);
  else if (param->player == 1)
    player_two(param);
}
