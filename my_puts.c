
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
