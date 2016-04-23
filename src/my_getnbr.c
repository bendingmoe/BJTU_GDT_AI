

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
