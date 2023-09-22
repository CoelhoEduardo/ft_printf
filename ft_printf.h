/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:25 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/09/20 22:29:20 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long nbr);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_puthex(unsigned int nbr);
int	ft_puthex_upper(unsigned int nbr);
int	ft_putptr(unsigned long nbr);

#endif
