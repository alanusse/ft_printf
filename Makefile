# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 22:08:14 by aglanuss          #+#    #+#              #
#    Updated: 2023/10/21 20:04:00 by aglanuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB = ar -rcs

RM = rm -rf

INCLUDE = ft_printf.h

SRC = ft_printf.c ft_putchar.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ) $(INCLUDE)

%.o: %.c Makefile $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all