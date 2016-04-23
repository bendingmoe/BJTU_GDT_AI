/*
** my_strs.c for my_strs in /home/masson_k/epitech/minishell
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Tue Dec 18 11:02:31 2012 masson_k
** Last update Sun Feb 17 10:34:35 2013 masson_k
*/

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
