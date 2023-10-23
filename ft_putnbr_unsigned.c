/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:34:10 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/23 17:15:48 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int nb)
{
  size_t  ret;

  ret = 0;
  if (nb == 0)
    return (ft_putnbr(0));
  if (nb > 9)
  {
    ret += ft_putnbr_unsigned(nb / 10);
    ret += ft_putchar('0' + nb % 10);
  }
  else
    ret += ft_putchar('0' + nb);
  return (ret);
}