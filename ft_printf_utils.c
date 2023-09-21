/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:14:33 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/19 18:14:43 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c)
{
  return (write(1, &c, 1));
}

int ft_putstr(char *s)
{
  int i;

  i = 0;
  while(s[i])
  {
    write(1, &s[i], 1);
    i++;
  }
  return (i);
}

int ft_putnbr(int nbr)
{
  if (nbr == -2147483648)
  {
    ft_putchar('-');
    ft_putchar('2');
    ft_putnbr(147483648);
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

int ft_putnbr_unsigned(unsigned int nbr)
{
  if (nbr > 9)
  {
    ft_putnbr_unsigned(nbr / 10);
    ft_putchar(nbr % 10 + 48);
  }
  else 
  {
    ft_putchar(nbr + 48);
  }
  return (nbr);
}

int ft_puthex(unsigned long int nbr)
{
  char *base;

  base = "0123456789abcdef";
  if (nbr)
  {
    ft_puthex(nbr / 16);
  }
  write(1, nbr % 16 + base, 1);

  return (nbr);
}

int ft_puthex_upper(unsigned int nbr)
{
  char *base;

  base = "0123456789ABCDEF";
  if (nbr)
  {
    ft_puthex(nbr / 16);
    write(1, nbr % 16 + base, 1);
  }
  return (nbr);
}

