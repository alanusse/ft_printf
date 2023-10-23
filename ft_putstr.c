/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:58:38 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/23 02:10:08 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
  size_t  ret;

  if (!str)
    str = "(null)";
  ret = 0;
  while(*str)
  {
    write(1, str, 1);
    ret++;
    str++;
  }
  return (ret);
}