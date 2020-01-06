# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/15 15:17:26 by sgarry            #+#    #+#              #
#    Updated: 2019/05/16 18:04:31 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = fillit.c fillit1.c fillit_2.c ft_copy_array.c main.c
OBJ = fillit.o fillit1.o fillit_2.o ft_copy_array.o main.o
JUNK = fillit.h.gch libft/libft.h.gch
HEADER = fillit.h libft/libft.h
LIB = libft/libft.a

all: $(NAME)

$(NAME):
		make -C libft/ re
		gcc -Wall -Wextra -Werror -c $(SRC) $(HEADER)
		gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) $(LIB)
clean:
		/bin/rm -f $(OBJ) $(JUNK)
		make -C libft/ clean
fclean: clean
		make -C libft/ fclean
		/bin/rm -f $(NAME)
re: fclean all
