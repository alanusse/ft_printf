/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:06:02 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/23 02:21:52 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int nb)
{
  size_t  ret;

  ret = 0;
  if (nb == -2147483648)
    return (ft_putstr("-2147483648"));
  if (nb < 0)
  {
    ret += ft_putchar('-');
    ret += ft_putnbr(nb * -1);
  }
  else if (nb > 9)
  {
    ret += ft_putnbr(nb / 10);
    ret += ft_putchar('0' + nb % 10);
  }
  else
    ret += ft_putchar('0' + nb);
  return (ret);
}