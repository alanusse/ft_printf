/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:20:19 by agulanus          #+#    #+#             */
/*   Updated: 2025/03/20 16:01:33 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Print a character using write function.
 * 
 * If write function fails, set is_error of status struct to true.
 */
void	ft_putchar(t_ft_printf *pf_state, char c)
{
	if (write(1, &c, 1) == 1)
		pf_state->length++;
	else
		pf_state->is_error = true;
}
