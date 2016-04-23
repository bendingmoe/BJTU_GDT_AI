/*
** my_put_nbr.c for  in /home/garner_p//Jour_03
** 
** Made by philip garnero
** Login   <garner_p@epitech.net>
** 
** Started on  Wed Oct  3 20:27:20 2012 philip garnero
** Last update Fri Feb  8 12:04:14 2013 masson_k
*/

int	my_put_nbr(int nb)
{
  int	n;

  n = nb % 10;
  nb = nb / 10;
  if (nb != 0)
    my_put_nbr(nb);
  if (n < 0)
    n *= -1;
  my_putchar('0' + n);
}

void	my_putnbr(int nb)
{
  if (nb < 0)
      my_putchar('-');
  my_put_nbr(nb);
}
