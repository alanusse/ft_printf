/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:06:02 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/25 23:32:52 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Print a number.
 * If putchar or putnbr function fails, set tab error to 1,
 * length to -1 and return 0.
*/
int	ft_putnbr(t_print *tab, int nb)
{
	if (nb == -2147483648 && ft_putstr(tab, "-2147483648") == 0)
		return (0);
	if (nb < 0)
	{
		if (ft_putchar(tab, '-') == 0 || ft_putnbr(tab, nb * -1) == 0)
			return (0);
	}
	else if (nb > 9)
	{
		if (ft_putnbr(tab, nb / 10) == 0
			|| ft_putchar(tab, ('0' + nb % 10)) == 0)
			return (0);
	}
	else if (ft_putchar(tab, ('0' + nb)) == 0)
		return (0);
	else
		return (1);
}

int	ft_putnbr_unsigned(t_print *tab, unsigned int nb)
{
	if (nb == 0 && ft_putnbr(tab, 0) == 0)
		return (0);
	if (nb > 9)
	{
		if (ft_putnbr_unsigned(tab, (nb / 10)) == 0
			|| ft_putchar(tab, ('0' + nb % 10)) == 0)
			return (0);
	}
	else
	{
		if (ft_putchar(tab, ('0' + nb)) == 0)
			return (0);
		else
			return (1);
	}
}
