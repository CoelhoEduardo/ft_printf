#include "ft_printf.h"

int ft_puthex(unsigned int nbr)
{
  char *base;

  base = "0123456789abcdef";
  if (nbr)
  {
    ft_puthex(nbr / 16);
    write(1, nbr % 16 + base, 1);
  }
  return (nbr);
}

