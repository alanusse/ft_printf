/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:33:48 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/25 23:27:18 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Print a char.
 * If write fails, sets tab error to 1 and length to -1, and return 0.
 * 
*/
int	ft_putchar(t_print *tab, char c)
{
	if (write(1, &c, 1) == -1)
	{
		tab->error = 1;
		tab->length = -1;
		return (0);
	}
	tab->length += 1;
	return (1);
}
