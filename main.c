#include "ft_printf.h"


int print_format(char specifier, va_list ap)
{
  int count;

  count = 0;
  if(specifier == 'c')
    count+= ft_putchar(va_arg(ap, int));
  else if (specifier == 's')
    count += ft_putstr(va_arg(ap, char *));
  else if (specifier == 'i')
    count += ft_putnbr(va_arg(ap, int));
  else if (specifier == 'd')
    count += ft_putnbr(va_arg(ap, int));
  else if (specifier == 'u')
    count += ft_putunsignednbr(va_arg(ap, unsigned int));
  else if (specifier == 'x')
    count += ft_puthex(va_arg(ap, unsigned int));
  else if (specifier == 'X')
    count += ft_puthex_upper(va_arg(ap, unsigned int));

  return (count);
}

int ft_printf(const char *format, ...)
{
  va_list ap;
  int count;

  va_start(ap, format);
  count = 0;
  if (*format == '\0')
    return (-1);
  while (*format != '\0')
  {
    if (*format == '%')
      count += print_format (*(++format), ap);
    else
      write(1, format, 1);

    ++format;
  }
  va_end(ap);
  return(count);
}

#include <stdio.h>
int main(void)
{
  char c = 'a';
  int x = -42;
  int *p = &x;
  int nbr = -2147483647;
  unsigned int unbr = 4294967295;
  char *str = "You Shall Not Pass";

  ft_printf("1 my function testing c format = %c \n", c);
  printf("real printf value = %c \n\n", c);
  ft_printf("2 my function testing s format = %s \n", str);
  printf("real printf value = %s \n\n", str);
  ft_printf("3 my function testing d format = %d \n", nbr);
  printf("real printf value = %d \n\n", nbr);
  ft_printf("4 my function testing i format = %i \n", nbr);
  printf("real printf value = %i \n\n", nbr);
  ft_printf("5 my function testing u format = %u \n", unbr);
  printf("real printf value = %u \n\n", unbr);
  ft_printf("6 my function testing x format = %x \n", x);
  printf("real printf value = %x \n\n", x);
  ft_printf("7 my function testing X format = %X \n", x);
  printf("real printf value = %X \n\n", x);
  printf("void * %p \n", p);
  ft_puthex(&x);

  return(0);
}
