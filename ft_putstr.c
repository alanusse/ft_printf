/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:58:38 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/25 22:50:11 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Print a string.
 * If string passed by argument is null, prints "(null)".
 * If putchar function fails, set tab error to 1, length to -1 and return 0.
*/
int	ft_putstr(t_print *tab, char *str)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (ft_putchar(tab, *str) == 1)
			str++;
		else
			return (0);
	}
}
