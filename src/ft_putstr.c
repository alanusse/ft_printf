/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:44:21 by agulanus          #+#    #+#             */
/*   Updated: 2025/04/22 10:27:38 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(t_ft_printf *pf_state, char *str)
{
	if (!str)
	{
		ft_putstr(pf_state, "(null)");
		return ;
	}
	while (*str)
	{
		ft_putchar(pf_state, *str);
		str++;
	}
}
