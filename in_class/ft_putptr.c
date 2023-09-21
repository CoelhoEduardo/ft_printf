/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:35:24 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 21:34:15 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_transformhex(unsigned long int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr > 15)
	{
		count += ft_transformhex(nbr / 16);
		count += write(1, nbr % 16 + base, 1);
	}
	else
		count += write(1, nbr % 16 + base, 1);
	return (count);
}

int	ft_putptr(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr != 0)
	{
		count += write(1, "0x", 2);
		count += ft_transformhex(nbr);
	}
	else
		return (write(1, "(nil)", 5));
	return (count);
}
