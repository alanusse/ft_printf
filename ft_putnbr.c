/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:06:02 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/26 13:18:34 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Print an int number.
 * 
 * If putchar or putstr function fails, set tab error to 1 and length to -1.
*/
void	ft_putnbr(t_print *tab, int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr(tab, "-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar(tab, '-');
		if (tab->error)
			return ;
		ft_putnbr(tab, nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(tab, nb / 10);
		if (tab->error)
			return ;
		ft_putchar(tab, ('0' + nb % 10));
	}
	else
	{
		ft_putchar(tab, ('0' + nb));
		if (tab->error)
			return ;
	}
}

/**
 * Print an unsigned int number.
 * 
 * If putchar or putnbr function fails, set tab error to 1 and length to -1.
*/
void	ft_putnbr_unsigned(t_print *tab, unsigned int nb)
{
	if (nb == 0)
	{
		ft_putnbr(tab, 0);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr_unsigned(tab, (nb / 10));
		if (tab->error)
			return ;
		ft_putchar(tab, ('0' + nb % 10));
	}
	else
	{
		ft_putchar(tab, ('0' + nb));
		if (tab->error)
			return ;
	}
}
