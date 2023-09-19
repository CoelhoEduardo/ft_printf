#include "ft_printf.h"

int ft_putunsignednbr(unsigned int n)
{
  if (n > 9)
  {
    ft_putunsignednbr(n / 10);
    ft_putchar(n % 10 + 48);
  }
  else {
    ft_putchar(n + 48);
  }

  return (n);
}

