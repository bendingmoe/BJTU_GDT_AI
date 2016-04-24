
#include	"allum1.h"

void	check_max(t_param *param)
{
  if (param->line.first > 1)
    {
      param->allum.y_allum = 1;
      param->allum.nb_allum = param->line.first;
    }
  else if (param->line.second > 1)
    {
      param->allum.y_allum = 2;
      param->allum.nb_allum = param->line.second;
    }
  else if (param->line.third > 1)
    {
      param->allum.y_allum = 3;
      param->allum.nb_allum = param->line.third;
    }
  else if (param->line.fourth > 1)
    {
      param->allum.y_allum = 4;
      param->allum.nb_allum = param->line.fourth;
    }
}

void	check_ia(t_param *param)
{
  param->line.check = 0;
  if (param->line.first == 0 || param->line.first == 1)
    param->line.check = param->line.check + 1;
  if (param->line.second == 0 || param->line.second == 1)
    param->line.check = param->line.check + 1;
  if (param->line.third == 0 || param->line.third == 1)
    param->line.check = param->line.check + 1;
  if (param->line.fourth == 0 || param->line.fourth == 1)
    param->line.check = param->line.check + 1;
}

void   check_zero(t_param *param)
{
  param->line.check = 0;
  if (param->line.first == 0)
    param->line.check = param->line.check + 1;
  if (param->line.second == 0)
    param->line.check = param->line.check + 1;
  if (param->line.third == 0)
    param->line.check = param->line.check + 1;
  if (param->line.fourth == 0)
    param->line.check = param->line.check + 1;
}

void	almost_final(t_param *param)
{
  param->allum.nb_allum = 1;
  if (param->line.first == 1)
    param->allum.y_allum = 1;
  else if (param->line.second == 1)
    param->allum.y_allum = 2;
  else if (param->line.third == 1)
    param->allum.y_allum = 3;
  else if (param->line.fourth == 1)
    param->allum.y_allum = 4;
}
