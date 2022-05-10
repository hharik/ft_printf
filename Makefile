# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 23:26:09 by hharik            #+#    #+#              #
#    Updated: 2021/11/15 23:27:11 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
SRCS =  ft_strlen.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_u.c \
		ft_putnbr.c \
		ft_hex.c \
		ft_hexupper.c \
		ft_memorryadress.c \
		ft_len.c \

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)

re : fclean all