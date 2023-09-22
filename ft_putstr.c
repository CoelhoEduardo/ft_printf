/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:32:39 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 21:23:23 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (s == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i])
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
