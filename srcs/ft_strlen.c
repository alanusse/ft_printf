/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:46:52 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:35 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * Count string length.
 * 
 * Return the string length.
*/
int	ft_strlen(char *str)
{
	size_t	size;

	size = -1;
	while (str[++size])
		size++;
	return (size);
}
