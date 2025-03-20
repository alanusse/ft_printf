/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:56:57 by agulanus          #+#    #+#             */
/*   Updated: 2025/03/20 14:32:26 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void  initialize_state(t_ft_printf *state)
{
  state->length = 0;
  state->is_error = false;
}

int ft_printf(const char *format, ...)
{
  t_ft_printf *pf_state;
  int          i;

  pf_state = malloc(sizeof(t_ft_printf));
  if (!pf_state)
    return (-1);

  initialize_state(pf_state);
  va_start(pf_state->args, format);
  i = -1;
  while (format[++i] && !pf_state->is_error)
  {
    ft_putchar(pf_state, format[i]);
  }
  free(pf_state);
  va_end(pf_state->args);
  return(pf_state->length);
}