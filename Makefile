# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 13:46:45 by mvalerio          #+#    #+#              #
#    Updated: 2023/05/03 15:21:45 by mvalerio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printed.c

CFLAGS := -Wall -Wextra -Werror

CC = gcc -c $(CFLAGS)

all: $(NAME)

$(NAME):
	make -C Libft
	$(CC) $(SRC)
	ar rcs $(NAME) $(SRC:.c=.o) Libft/*.o

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
