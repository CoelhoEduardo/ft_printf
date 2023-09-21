/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:33:57 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 21:31:00 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	unsigned long int	number;
	int					count;

	number = nbr;
	count = 0;
	if (nbr > 9)
	{
		count += ft_putnbr_unsigned(nbr / 10);
	}
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
