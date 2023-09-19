#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int  ft_putchar(int c);
int  ft_putstr(char *s);
int  ft_putnbr(int nbr);
int  ft_putunsignednbr(unsigned int nbr);
int  ft_puthex(unsigned int nbr);
int  ft_puthex_upper(unsigned int nbr);

#endif
