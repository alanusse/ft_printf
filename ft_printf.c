/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:13:42 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/20 23:49:34 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_conversion()

int	ft_printf(char const *format, ...)
{
	int	printed_chars;
	int	i;

	printed_chars = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')

		i++;
	}
	return (printed_chars);
}

#include <stdio.h>
#include <string.h>
int main()
{
	int foo = printf("%s %s", strdup("hola"));
	return 1;
}