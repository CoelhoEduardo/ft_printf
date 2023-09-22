/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:34 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/22 16:26:53 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(ap, unsigned long));
	else if (specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_puthex(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_puthex_upper(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	if (*format == '\0')
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
