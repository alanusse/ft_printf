/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:16:44 by agulanus          #+#    #+#             */
/*   Updated: 2025/04/22 11:12:56 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(t_ft_printf *pf_state, int nbr)
{
	if (nbr == -2147483648)
		return (ft_putstr(pf_state, "-2147483648"));
	if (nbr < 0)
	{
		ft_putchar(pf_state, '-');
		ft_putnbr(pf_state, nbr * -1);
	}
	else
	{
		if (nbr < 10)
			ft_putchar(pf_state, '0' + nbr);
		else
		{
			ft_putnbr(pf_state, nbr / 10);
			ft_putchar(pf_state, nbr % 10);
		}
	}
}
