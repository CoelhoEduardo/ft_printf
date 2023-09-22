/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:33:25 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 22:39:43 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nbr)
{
	int		count;

	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putchar(nbr % 10 + 48);
	}
	else
		count += ft_putchar(nbr + 48);
	return (count);
}
