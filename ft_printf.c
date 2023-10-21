/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:13:42 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/21 20:04:14 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_conversion(char c)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c')
		return (ft_putchar(c)); // todo: implement
	else if (c == 's')
		return (ft_printf("{string}"));
	else
		return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	words_count;

	i = -1;
	words_count = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
			words_count += print_conversion(format[++i]);
		else
			words_count += ft_putchar(format[i]);
	}
	return (words_count);
}

#include <stdio.h>

int main()
{
	int count;

	// count = ft_printf("hola que tal %s\n", "-esto es un string-");
	count = ft_printf("hola que tal %c\n", 'c');

	printf("\ncount: %i", count);
	return (1);
}