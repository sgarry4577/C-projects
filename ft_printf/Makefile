# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/15 15:17:26 by sgarry            #+#    #+#              #
#    Updated: 2019/07/20 19:26:15 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
DIR =		./source
ODIR =		./objects
SRC =		check_hub.c ft_flag_o_u_x.c ft_putstr.c ft_strreplchar.c \
			checker.c ft_flag_p.c ft_sswap.c ft_strsearch.c \
			colors.c ft_i_5.c ft_strcat.c ft_strstr.c \
			flag_checker.c ft_itoa.c ft_strclen.c ft_strsub.c \
			flag_g_free.c ft_litoa.c ft_strcpy.c ft_uitoa.c \
			ft_atoi.c ft_memalloc.c ft_strjoinre.c ft_width.c \
			ft_flag_e.c ft_memdel.c ft_strlen.c main.c \
			ft_flag_e_2.c ft_minus.c ft_strncpy.c mod_redirect.c \
			ft_flag_f.c ft_proverka.c ft_strnew.c modificators.c \
			ft_flag_f_2.c ft_putchar.c ft_strrejoin.c printf_depleted.c \
			ft_flag_g.c ft_putendl.c ft_strrejoinre.c redirect_target_get.c \
			ft_flag_i.c ft_putnbr.c ft_strrejoinren.c redirect_target_icsf_.c
HEADER =	./includes
FLAGS =		-Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
ODEL = $(ODIR)/$(SRC:.c=.o)

%.o: $(DIR)/%.c
		gcc -c $(FLAGS) $^ -I$(HEADER)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
nof:
		gcc -o $(NAME) $(SRC)
clean:
		/bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME)
re: fclean
		make all
my: fclean
		gcc $(SRC) mmain.c; ./a.out
debug: fclean
		gcc -g $(SRC) mmain.c; ./a.out
