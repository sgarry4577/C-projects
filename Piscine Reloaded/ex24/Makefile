# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 19:48:19 by sgarry            #+#    #+#              #
#    Updated: 2019/04/02 19:59:25 by sgarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_strcmp.c $(PATH)ft_strlen.c $(PATH)ft_swap.c
PATH = ./srcs/
HEADER = ./includes/
OB = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)
	ar rc $(NAME) $(OB)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)

clean:
	/bin/rm -f *.o
fclean:
	/bin/rm -f $(NAME)
re: fclean all
