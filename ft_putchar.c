/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:33:48 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/25 20:32:28 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(t_print *tab, char c)
{
	if (write(1, &c, 1) == -1)
	{
		tab->error = 1;
		tab->length = -1;
	}
	else
		tab->length += 1;
}
