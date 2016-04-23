
#include	<stdlib.h>
#include	"allum1.h"

int	line_first(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->line.first)
    {
      if ((i ^ param->line.second ^
	   param->line.third ^ param->line.fourth) == 0)
	{
	  param->allum.y_allum = 1;
	  param->allum.nb_allum = (param->line.first - i);
	  erase_allum(param);
	  display_allum(param);
	  check_final(param);
	  if (param->final == 1)
	    {
	      my_putstr("You're a winner!\n\n");
	      exit(1);
	    }
	  param->player = 0;
	  return (1);
	}
      i++;
    }
  return (0);
}

int	line_second(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->line.second)
    {
      if ((param->line.first ^ i ^
	   param->line.third ^ param->line.fourth) == 0)
	{
	  param->allum.y_allum = 2;
	  param->allum.nb_allum = (param->line.second - i);
	  erase_allum(param);
	  display_allum(param);
	  check_final(param);
	  if (param->final == 1)
	    {
	      my_putstr("You're a winner!\n\n");
	      exit(1);
	    }
	  param->player = 0;
	  return (1);
	}
      i++;
    }
  return (0);
}

int	line_third(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->line.third)
    {
      if ((param->line.first ^ param->line.second ^
	   i ^ param->line.fourth) == 0)
	{
	  param->allum.y_allum = 3;
	  param->allum.nb_allum = (param->line.third - i);
	  erase_allum(param);
	  display_allum(param);
	  check_final(param);
	  if (param->final == 1)
	    {
	      my_putstr("You're a winner!\n\n");
	      exit(1);
	    }
	  param->player = 0;
	  return (1);
	}
      i++;
    }
  return (0);
}

int	line_fourth(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->line.fourth)
    {
      if ((param->line.first ^ param->line.second ^
	   param->line.third ^ i) == 0)
	{
	  param->allum.y_allum = 4;
	  param->allum.nb_allum = (param->line.fourth - i);
	  erase_allum(param);
	  display_allum(param);
	  check_final(param);
	  if (param->final == 1)
	    {
	      my_putstr("You're a winner!\n\n");
	      exit(1);
	    }
	  param->player = 0;
	  return (1);
	}
      i++;
    }
  return (0);
}
