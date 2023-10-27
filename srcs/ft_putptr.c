/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:50:13 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:27 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Print a memory address.
 * 
 * If putstr or put_hex_long fails, set tab error to 1.
*/
void	ft_putptr(t_print *tab, unsigned long ptr)
{
	ft_putstr(tab, "0x");
	if (tab->error)
		return ;
	ft_puthex_long(tab, "0123456789abcdef", (unsigned long)ptr);
}
