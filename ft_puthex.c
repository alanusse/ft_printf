/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:33:38 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/24 21:57:26 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(char *format, int nb)
{
  int ret;

  if (ft_strlen(format) != 16)
    return (-1);
  ret = 0;
  if (nb >= 0 && nb <= 15)
    return (ft_putchar(format[nb]));
  else
  {
    ret += ft_puthex(format, (nb / 16));
    ret += ft_putchar(format[nb % 16]);
  }
  return (ret);
}