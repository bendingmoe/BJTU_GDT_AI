
#include	<stdlib.h>
#include	"allum1.h"

int	easy_mode(t_param *param)
{
  char	*buff;

  while (1)
    {
      my_putstr("- SINGER PLAYER -\n\n");
      my_putstr("1) Easy\n2) Hard\n\nSelect your mode : \n");
      if ((buff = malloc(sizeof (char) * 4096)) == NULL)
	exit(1);
      if ((read(0, buff, 4096)) == 0)
	exit (1);
      param->j = my_getnbr(buff);
      if (param->j == 1 || param->j == 2)
	return (0);
      else
	{
	  my_putstr("Enter an available mode\n\n");
	}
    }
}

void	mode_one(t_param *param)
{
  easy_mode(param);
  display_allum(param);
  while (1)
    {
      if (param->player == 0)
	player_one(param);
      if (param->player == 2)
	player_ia(param);
    }
}

void	mode_two(t_param *param)
{
  while (1)
    {
      if (param->player == 0)
	player_one(param);
      if (param->player == 1)
	player_two(param);
    }
}
