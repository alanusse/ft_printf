/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:13:42 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/23 02:13:59 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*initialize_tab(t_print *tab)
{
	tab->length = 0;
	return (tab);
}

int	print_conversion(t_print *tab, char c)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c')
		return (ft_putchar(va_arg(tab->args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(tab->args, char*)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(tab->args, int)));
	else if (c == 'p')
		return (ft_putnbr(va_arg(tab->args, unsigned long)));
	else
		return (0);
}

int	ft_printf(char const *format, ...)
{
	t_print	*tab;
	size_t	i;
	size_t	ret;

	tab = (t_print*)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	tab = initialize_tab(tab);
	va_start(tab->args, format);
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
			tab->length += print_conversion(tab, format[++i]);
		else
			tab->length += ft_putchar(format[i]);
	}
	va_end(tab->args);
	ret = tab->length;
	free(tab);
	return (ret);
}

// #include <stdio.h>

// int main()
// {
// 	int count;

// 	// count = ft_printf("hola que tal %s\n", "-esto es un string-");
// 	count = ft_printf("NULL %s NULL\n", NULL);

// 	printf("\ncount: %i", count);
// 	return (1);
// }