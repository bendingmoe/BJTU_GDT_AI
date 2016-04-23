

#include	<stdlib.h>
#include	"allum1.h"

int	select_mode(t_param *param)
{
  char	*buff;

  while (1)
    {
      my_putstr("- PLAYER MODE -\n\n");
      my_putstr("1) Single Player\n2) Two Players\n\nSelect your mode :\n");
      if ((buff = malloc(sizeof (char) * 4096)) == NULL)
	exit(1);
      if ((read(0, buff, 4096)) == 0)
	exit (1);
      param->mode = my_getnbr(buff);
      if (param->mode == 1 || param->mode == 2)
	return (0);
      else
	{
	  my_putstr("Enter an available mode\n\n");
	}
    }
}

void	display_allum(t_param *param)
{
  int	j;

  j = 0;
  while (j <= 3)
    {
      my_putstrs(param->allum.pars[j], "\n");
      j++;
    }
  my_putchar('\n');
}
