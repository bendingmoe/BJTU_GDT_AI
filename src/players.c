
#include	<stdlib.h>
#include	"allum1.h"

void	play_one(t_param *param, char *buff)
{
  param->allum.pars[param->allum.y_allum - 1][0] = '=';
  param->allum.pars[param->allum.y_allum - 1][1] = '>';
  display_allum(param);
  my_putstrs("- Player 1 -\n\nSelect a number of match", ": ");
  if ((read(0, buff, 4096)) == 0)
    exit (1);
  param->allum.nb_allum = my_getnbr(buff);
  erase_allum(param);
  display_allum(param);
  check_final(param);
  if (param->final == 1)
    {
      if (param->mode == 2)
	my_putstr("Player two won!\n\n");
      else
	my_putstr("The IA won. You lose.\n\n");
      exit (1);
    }
  if (param->mode == 2)
    param->player = 1;
  if (param->mode == 1)
    param->player = 2;
}

int	player_one(t_param *param)
{
  char	*buff;

  my_putstrs("- Player 1 -\n\nChoose a line of match", ": ");
  if ((buff = malloc(sizeof (char) * 4096)) == NULL)
    exit(0);
  if ((read(0, buff, 4096)) == 0)
    exit (1);
  param->allum.y_allum = my_getnbr(buff);
  if (param->allum.y_allum > 4 || param->allum.y_allum <= 0)
    error_line(param);
  else if (check_match(param) == 1)
    error_empty(param);
  else
    {
      play_one(param, buff);
    }
}

void	play_two(t_param *param, char *buff)
{
  param->allum.pars[param->allum.y_allum - 1][0] = '=';
  param->allum.pars[param->allum.y_allum - 1][1] = '>';
  display_allum(param);
  my_putstrs("- Player 2 -\n\nSelect a number of match", ": ");
  if ((read(0, buff, 4096)) == 0)
    exit (1);
  param->allum.nb_allum = my_getnbr(buff);
  erase_allum(param);
  display_allum(param);
  check_final(param);
  if (param->final == 1)
    {
      my_putstr("Player one won!\n\n");
      exit (1);
    }
  param->player = 0;

}

int	player_two(t_param *param)
{
  char	*buff;

  my_putstrs("- Player 2 -\n\nChoose a line of match", ": ");
  if ((buff = malloc(sizeof (char) * 4096)) == NULL)
    exit(1);
  if ((read(0, buff, 4096)) == 0)
    return (1);
  param->allum.y_allum = my_getnbr(buff);
  if (param->allum.y_allum > 4 || param->allum.y_allum <= 0)
    error_line(param);
  else if (check_match(param) == 1)
    error_empty(param);
  else
    {
      play_two(param, buff);
    }
}
