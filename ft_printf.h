#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putstr(char *s);
int ft_putnbr(int nbr);
int ft_putnbr_unsigned(unsigned int nbr);
int ft_puthex(unsigned long int nbr);
int ft_puthex_upper(unsigned int nbr);
int ft_putptr(unsigned long nbr);
#endif

