#include "ft_printf.h"

int  ft_putnbr(int nbr)
{
  if (nbr == -2147483648)
  {
    ft_putchar('-');
    ft_putchar('2');
    nbr = 147483648;
    ft_putnbr(nbr);
  }
  else if (nbr < 0)
  {
    ft_putchar('-');
    ft_putnbr(nbr * -1);
  }
  else if (nbr > 9)
  {
    ft_putnbr(nbr / 10);
    ft_putchar(nbr % 10 + 48);
  }
  else 
  {
    ft_putchar(nbr + 48);
  }

  return (nbr);
}

