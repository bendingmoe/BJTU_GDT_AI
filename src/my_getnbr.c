/*
** my_getnbr.c for my_getnbr in /home/masson_k//archives
** 
** Made by clovis masson
** Login   <masson_k@epitech.net>
** 
** Started on  Wed Oct 10 14:35:15 2012 clovis masson
** Last update Fri Oct 26 22:44:56 2012 masson_k
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (str[i] >= 48 && str[i] <= 57)
	nb = (str[i] - 48) + (nb * 10);
      i++;
      if (nb != 0 && (str[i] < 48 || str[i] > 57))
	return (nb);
    }
  return (nb);
}
