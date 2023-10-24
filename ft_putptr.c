/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:50:13 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/25 01:33:35 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long ptr)
{
  int ret;

  ret = 0;
  ret += ft_putstr("0x");
  ret += ft_puthex_long("0123456789abcdef", (unsigned long)ptr);
  return (ret);
}