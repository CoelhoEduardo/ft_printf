#include "ft_printf.h"


int ft_puthex_upper(unsigned int nbr)
{
  char *base;

  base = "0123456789ABCDEF";
  if (nbr)
  {
    ft_puthex_upper(nbr / 16);
    write(1, nbr % 16 + base, 1);
  }
  return (nbr);
}

