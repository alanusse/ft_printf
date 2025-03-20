/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:56:57 by agulanus          #+#    #+#             */
/*   Updated: 2025/03/20 18:37:48 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Initialize printf_state
 */
void	initialize_state(t_ft_printf *state)
{
	state->length = 0;
	state->is_error = false;
}

void print_conversion(t_ft_printf *pf_state, char c)
{
	if (c == '%')
		ft_putchar(pf_state, '%');
	if (c == 'c')
		ft_putchar(pf_state, va_arg(pf_state->args, int));
	if (c == 's')
		ft_putstr(pf_state, va_arg(pf_state->args, char *));
	if (c == 'i')
		ft_putnbr(pf_state, va_arg(pf_state->args, int));
}

int	ft_printf(const char *format, ...)
{
	t_ft_printf	*pf_state;
	int			i;

	pf_state = malloc(sizeof(t_ft_printf));
	if (!pf_state)
		return (-1);
	initialize_state(pf_state);
	va_start(pf_state->args, format);
	i = -1;
	while (format[++i] && !pf_state->is_error)
	{
		if (format[i] == '%')
			print_conversion(pf_state, format[++i]);
		else
			ft_putchar(pf_state, format[i]);
	}
	free(pf_state);
	va_end(pf_state->args);
	return (pf_state->length);
}
