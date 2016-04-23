
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
