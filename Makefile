# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 14:33:09 by agulanus          #+#    #+#              #
#    Updated: 2025/04/22 11:05:21 by agulanus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
LIB = ar -rcs

INCLUDES = includes/ft_printf.h

SRCS = src/ft_printf.c src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c \
				src/ft_putunbr.c

OBJS = $(SRCS:.c=.o)

all = $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(LIB) $(NAME) $(OBJS)

%.o: %.c $(INCLUDES) Makefile
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re