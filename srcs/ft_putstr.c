/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:58:38 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:32 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Print a string.
 * 
 * If string passed by argument is null, prints "(null)".
 * If write function fails, set tab error to 1.
 * Else, tab length will be n + 1;
*/
void	ft_putstr(t_print *tab, char *str)
{
	if (!str)
		str = "(null)";
	while (*str && !tab->error)
	{
		ft_putchar(tab, *str);
		str++;
	}
}
