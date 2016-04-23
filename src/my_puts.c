/*
** my_puts.c for my_puts in /home/masson_k/epitech/allum1
** 
** Made by masson_k
** Login   <masson_k@clovis-HP-EliteBook-8560p>
** 
** Started on  Thu Feb  7 11:40:35 2013 masson_k
** Last update Wed Feb 13 15:08:39 2013 masson_k
*/

void	my_putchar(char a)
{
  write(1, &a, 1);
}

void	my_putstrs(char *str, char *str2)
{
  int	e;

  e = 0;
  while (str[e])
    {
      my_putchar(str[e]);
      e++;
    }
  e = 0;
  while (str2[e])
    {
      my_putchar(str2[e]);
      e++;
    }
}

void	my_putstr(char *str)
{
  int	e;

  e = 0;
  while (str[e])
    {
      my_putchar(str[e]);
      e++;
    }
}
