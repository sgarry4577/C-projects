# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/31 15:02:03 by sgarry            #+#    #+#              #
#    Updated: 2019/08/19 17:01:10 by sgarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	lem-in

CC = gcc

DIR =	./source/

ODIR =	./libft/sourse/

CFLAGS = -c -Wall -Wextra -Werror

CGFLAGS = -g

FLAG_PATH_OBJ = -o $@

HEADER = ./includes/

PATH_S = ./obj/

OBJECT = ft_short_way_2.o ft_short_way_s.o ft_valid.o ft_valid_2.o ft_valid_s.o \
main.o ft_res.o ft_short_way_3.o ft_valid_3.o

LIBFT =	make -C ./libft/

PATH_SRC = $(patsubst %.o, $(PATH_S)%.o, $(OBJECT))

all: LIB $(NAME)
LIB :
	$(LIBFT)
$(NAME): $(PATH_SRC)
	$(CC) $(PATH_SRC) -o $(NAME) -I $(ODIR) -L $(ODIR) -lft

$(PATH_S)ft_short_way_2.o: source/ft_short_way_2.c
	$(CC) $(CFLAGS) source/ft_short_way_2.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_short_way_s.o: source/ft_short_way_s.c
	$(CC) $(CFLAGS) source/ft_short_way_s.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_valid.o: source/ft_valid.c
	$(CC) $(CFLAGS) source/ft_valid.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_valid_2.o: source/ft_valid_2.c
	$(CC) $(CFLAGS) source/ft_valid_2.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_valid_s.o: source/ft_valid_s.c
	$(CC) $(CFLAGS) source/ft_valid_s.c $(FLAG_PATH_OBJ)
$(PATH_S)main.o: source/main.c
	$(CC) $(CFLAGS) source/main.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_res.o: source/ft_res.c
	$(CC) $(CFLAGS) source/ft_res.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_short_way_3.o: source/ft_short_way_3.c
	$(CC) $(CFLAGS) source/ft_short_way_3.c $(FLAG_PATH_OBJ)
$(PATH_S)ft_valid_3.o: source/ft_valid_3.c
	$(CC) $(CFLAGS) source/ft_valid_3.c $(FLAG_PATH_OBJ)
clean:
	make fclean -C ./libft/
	rm -f $(PATH_SRC)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean
	make all
