
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
