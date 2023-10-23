/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:13:42 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/23 17:47:36 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * 
 * Inicializar la tabla con valores de 0.
 * 
*/
t_print	*initialize_tab(t_print *tab)
{
	tab->length = 0;
	return (tab);
}

/**
 * 
 * Convertir y printear cada uno de los formats encontrados.
 * Esta función va a retornar el número de carácteres impresos.
 * 
*/
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
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(tab->args, unsigned int)));
	// else if (c == 'p')
	// 	return (ft_putstr(va_arg(tab->args, unsigned long)));
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
		return (-1); // Retorna -1 ya que la función original de printf, retorna -1 si encuentra algún error en el funcionamiento.
	tab = initialize_tab(tab);
	va_start(tab->args, format); // Inicializamos la va_list con el último parámetro conocido.
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
// 	printf("%u \n", -1);
// 	ft_printf("%u \n", -1);
// 	ft_putnbr_unsigned(-1);
// 	return (1);
// }