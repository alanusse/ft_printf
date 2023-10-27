/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:33:38 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:19 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Convert an unsigned int to an hexadecimal number and print it.
 * 
 * If format not have 16 characters, set tab error to 1.
 * If putchar function fail, set tab error to 1.
*/
void	ft_puthex(t_print *tab, char *format, unsigned int nb)
{
	if (ft_strlen(format) != 16)
	{
		tab->error = 1;
		return ;
	}
	if (nb >= 0 && nb <= 15)
	{
		ft_putchar(tab, format[nb]);
		if (tab->error)
			return ;
	}
	else
	{
		ft_puthex(tab, format, (nb / 16));
		if (tab->error)
			return ;
		ft_putchar(tab, format[nb % 16]);
	}
}

/**
 * Convert an unsigned long to an hexadecimal number and print it.
 * 
 * If format not have 16 characters, set tab error to 1.
 * If putchar function fail, set tab error to 1.
*/
void	ft_puthex_long(t_print *tab, char *format, unsigned long nb)
{
	if (ft_strlen(format) != 16)
	{
		tab->error = 1;
		return ;
	}
	if (nb >= 0 && nb <= 15)
	{
		ft_putchar(tab, format[nb]);
		if (tab->error)
			return ;
	}
	else
	{
		ft_puthex_long(tab, format, (nb / 16));
		if (tab->error)
			return ;
		ft_putchar(tab, format[nb % 16]);
	}
}
