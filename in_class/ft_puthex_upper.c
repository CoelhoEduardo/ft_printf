/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:34:17 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 19:25:21 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int nbr)
{
	char	*base;
	int		count;

	count = 1;
	base = "0123456789ABCDEF";
	if (nbr > 15)
		count += ft_puthex_upper(nbr / 16);
	count += write(1, nbr % 16 + base, 1);
	return (nbr);
}
