# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 22:08:14 by aglanuss          #+#    #+#              #
#    Updated: 2023/10/27 10:06:33 by aglanuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB = ar -rcs

RM = rm -rf

INCLUDES = ft_printf.h
INCLUDES_DIR = includes
INCLUDES_TARGETS = $(addprefix $(INCLUDES_DIR)/,$(INCLUDES))

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
			ft_strlen.c ft_puthex.c
SRCS_DIR = srcs
SRCS_TARGETS = $(addprefix $(SRCS_DIR)/,$(SRCS))
OBJ = $(SRCS_TARGETS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES_TARGETS)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c Makefile $(INCLUDES_TARGETS)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re