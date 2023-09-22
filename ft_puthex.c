/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:34:46 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 19:25:09 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (nbr > 15)
	{
		count += ft_puthex(nbr / 16);
	}
	count += write(1, nbr % 16 + base, 1);
	return (count);
}
