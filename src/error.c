
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
