# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 18:14:53 by sgarry            #+#    #+#              #
#    Updated: 2019/07/25 16:12:09 by sgarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap checker
DIR =		./source/
ODIR =		./libft
SRC = 		$(DIR)checker.c \
			$(DIR)ft_valid.c \
			$(DIR)ft_sa.c \
			$(DIR)ft_print_mass.c \
			$(DIR)ft_valid_vc.c
SRC2 =		$(DIR)ft_logick_start_0.c \
			$(DIR)ft_ll_2_0.c \
			$(DIR)push_swap.c \
			$(DIR)ft_ll.c \
			$(DIR)ft_sa.c \
			$(DIR)ft_logick_many.c \
			$(DIR)ft_valid.c \
			$(DIR)ft_logick.c \
			$(DIR)ft_print_mass.c \
			$(DIR)ft_valid_vc.c

FLAGS =		-Wall -Wextra -Werror
HEADER =	./includes
LIBFT =  	make -C ./libft/
all:  $(NAME)

$(NAME):
	$(LIBFT)
	gcc $(FLAGS) -o push_swap $(SRC2) -I $(ODIR) -L $(ODIR) -lft
	gcc $(FLAGS) -o checker $(SRC) -I $(ODIR) -L $(ODIR) -lft

clean:
	make fclean -C ./libft/
fclean: clean
	/bin/rm -f $(NAME)
re: fclean
	make all
push:
	gcc $(FLAGS) -o push_swap $(SRC2) -I $(ODIR) -L $(ODIR) -lft
check:
	gcc $(FLAGS) -o checker $(SRC) -I $(ODIR) -L $(ODIR) -lft
random:
	ARG=`ruby -e "puts (1 .. 5).to_a.shuffle.join(' ')"`
