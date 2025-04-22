/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:00:30 by agulanus          #+#    #+#             */
/*   Updated: 2025/04/22 11:12:35 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putunbr(t_ft_printf *pf_state, unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar(pf_state, '0' + nbr);
	else
	{
		ft_putnbr(pf_state, nbr / 10);
		ft_putchar(pf_state, nbr % 10);
	}
}
