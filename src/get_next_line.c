/*
** get_next_line.c for wolf in /home/masson_k/epitech/Igraph/wolf
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Tue Jan  8 09:36:35 2013 masson_k
** Last update Thu Feb  7 10:13:59 2013 masson_k
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"allum1.h"

char		*get_next_line(const int fd, t_param *param)
{
  static int	i = BUF;
  static int	nb = 0;
  static char	buffer[BUF + 1];
  char		*str;

  str = NULL;
  param->j = 0;
  if (nb == 0 && i > (BUF - 1))
    {
      i = 0;
      if ((nb = read(fd, buffer, BUF)) == -1)
	  exit (1);
      buffer[nb] = '\0';
    }
  if (i < BUF && buffer[i])
    {
      if ((str = malloc(sizeof(char *) * 2048)) == NULL)
	exit(1);
      while (buffer[i] != '\n' && buffer[i] && param->j < 2048)
	str[(param->j)++] = buffer[i++];
      str[param->j] = '\0';
      if (buffer[i])
	i++;
    }
  return (str);
}
