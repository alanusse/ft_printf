/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:21:53 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/26 11:14:00 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	size_t	length;
	int		error;
}					t_print;

int		ft_printf(char const *format, ...);
void	ft_putchar(t_print *tab, char c);
void	ft_putstr(t_print *tab, char *str);
int		ft_putnbr(t_print *tab, int nb);
int		ft_putnbr_unsigned(t_print *tab, unsigned int nb);
// int		ft_strlen(char *str);
// int		ft_puthex(char *format, unsigned int nb);
// int		ft_puthex_long(char *format, unsigned long nb);
// int		ft_putptr(unsigned long ptr);

#endif