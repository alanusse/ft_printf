/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:49:51 by agulanus          #+#    #+#             */
/*   Updated: 2025/04/22 11:09:45 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_ft_printf
{
	va_list	args;
	size_t	length;
	bool	is_error;
}							t_ft_printf;

int		ft_printf(const char *format, ...);
void	ft_putchar(t_ft_printf *pf_state, char c);
void	ft_putstr(t_ft_printf *pf_state, char *str);
void	ft_putnbr(t_ft_printf *pf_state, int nbr);
void	ft_putunbr(t_ft_printf *pf_state, unsigned int nbr);

#endif