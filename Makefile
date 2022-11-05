# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:01:59 by aarbaoui          #+#    #+#              #
#    Updated: 2022/11/04 11:37:27 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= ft_printf.c ft_putchar.c ft_adress.c ft_putnbr.c ft_convert_upper.c ft_convert_lower.c ft_unsigned.c ft_putstr.c
OBJS= ${SRCS:%.c=%.o}
FLAGS= -Wall -Werror -Wextra
CC = cc
NAME= libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	@ar rc $(NAME) $(OBJS)

%.o: %.c
	${CC} ${FLAGS} -c $<

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all