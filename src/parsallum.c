/*
** calcul.c for calcul in /home/masson_k/epitech/Igraph/wolf
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Tue Jan  8 17:13:27 2013 masson_k
** Last update Thu Feb  7 12:19:41 2013 masson_k
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"allum1.h"

int	check_lines(char *buffer)
{
  int	e;
  int	i;

  e = 0;
  i = 0;
  while (buffer[e])
    {
      if (buffer[e] == '\n')
	i++;
      e++;
    }
  return (i);
}

int	check_columns(char *buffer, t_param *param)
{
  int	e;

  e = 0;
  while (buffer[e] != '\n')
    e++;
  param->allum.x_allum = e;
  return (e);
}

void	check_bytes(t_param *param)
{
  if (param->allum.bytes == 1000)
    {
      my_putstrs("Unavailable size of allum.", "\n");
      exit (1);
    }
}

char	**parsallum(char *av, t_param *param)
{
  char	**pars;
  int	fd;
  int	i;
  char  buffer[1010] = {0};

  if ((fd = open(av, O_RDONLY)) == -1)
    exit (1);
  if ((param->allum.bytes = read(fd, buffer, 1000)) == -1)
    exit (1);
  check_bytes(param);
  if (buffer[0] == '\0')
    exit (1);
  i = check_lines(buffer);
  check_columns(buffer, param);
  if ((pars = malloc(sizeof(char*) * (i + 2))) == NULL)
    exit(1);
  if ((fd = open(av, O_RDONLY)) == -1)
    exit (1);
  i = 0;
  while (pars[i] = get_next_line(fd, param))
    i++;
  param->allum.y_allum = i;
  pars[i] = NULL;
  return (pars);
}
