/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:13:42 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/26 13:43:25 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Initialize table with 0 values.
*/
t_print	*initialize_tab(t_print *tab)
{
	tab->length = 0;
	tab->error = 0;
	return (tab);
}

/**
 * Convert and print the found format.
*/
void	print_conversion(t_print *tab, char c)
{
	if (c == '%')
		ft_putchar(tab, '%');
	if (c == 'c')
		ft_putchar(tab, va_arg(tab->args, int));
	if (c == 's')
		ft_putstr(tab, va_arg(tab->args, char *));
	if (c == 'i' || c == 'd')
		ft_putnbr(tab, va_arg(tab->args, int));
	if (c == 'u')
		ft_putnbr_unsigned(tab, va_arg(tab->args, unsigned int));
	if (c == 'p')
		ft_putptr(tab, va_arg(tab->args, unsigned long));
	if (c == 'x')
		ft_puthex(tab, "0123456789abcdef", va_arg(tab->args, unsigned int));
	if (c == 'X')
		ft_puthex(tab, "0123456789ABCDEF", va_arg(tab->args, unsigned int));
}

int	ft_printf(char const *format, ...)
{
	t_print	*tab;
	size_t	i;
	size_t	ret;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	tab = initialize_tab(tab);
	va_start(tab->args, format);
	i = -1;
	while (format[++i] && tab->error == 0)
	{
		if (format[i] == '%')
			print_conversion(tab, format[++i]);
		else
			ft_putchar(tab, format[i]);
	}
	va_end(tab->args);
	if (tab->error)
		tab->length = -1;
	ret = tab->length;
	free(tab);
	return (ret);
}
