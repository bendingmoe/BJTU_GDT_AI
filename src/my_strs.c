
#include	<stdlib.h>
#include	"allum1.h"

int	my_strlen(char *str)
{
  int	e;

  e = 0;
  while (str[e])
    e++;
  return (e);
}

int	my_strcmp(char *str, char *str2)
{
  int	i;

  i = 0;
  while (str[i] || str2[i])
    {
      if (str[i] != str2[i])
	return (1);
      i++;
    }
  return (0);
}
