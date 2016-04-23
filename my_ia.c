

#include	<stdlib.h>
#include	"allum1.h"

int	my_strlen_line(char *str)
{
  int	e;
  int	i;

  e = 0;
  i = 0;
  while (str[e])
    {
      if (str[e] == '|')
	i++;
      e++;
    }
  return (i);
}

void	count_line(t_param *param)
{
  param->line.first = my_strlen_line(param->allum.pars[0]);
  param->line.second = my_strlen_line(param->allum.pars[1]);
  param->line.third = my_strlen_line(param->allum.pars[2]);
  param->line.fourth = my_strlen_line(param->allum.pars[3]);
}

int	player_ia(t_param *param)
{
  my_putstr("IA is playing ...\n\n");
  count_line(param);
  check_ia(param);
  if (param->line.check == 4 & param->j == 2)
    final_param(param);
  else if (param->line.check == 3 && param->j == 2)
    other_param(param);
  else
    {
      if ((line_first(param)) == 1)
	return (0);
      if ((line_second(param)) == 1)
	return (0);
      if ((line_third(param)) == 1)
	return (0);
      if ((line_fourth(param)) == 1)
	return (0);
    }
}
