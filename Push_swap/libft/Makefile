# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 10:50:24 by sgarry            #+#    #+#              #
#    Updated: 2019/07/25 14:47:04 by sgarry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_chacc.c ft_clon.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_sstrlen.c \
ft_sswap.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlen.c  ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_list_size.c \
ft_list_last.c check_hub.c checker.c colors.c flag_checker.c flag_g_free.c \
ft_flag_e_2.c ft_flag_e.c ft_flag_f_2.c ft_flag_f.c ft_flag_g.c ft_flag_i.c \
ft_flag_o_u_x.c ft_flag_p.c ft_i_5.c ft_litoa.c ft_minus.c ft_proverka.c \
ft_strrejoin.c ft_strrejoinre.c ft_strrejoinren.c ft_strreplchar.c \
ft_strsearch.c ft_uitoa.c ft_width.c ft_strclen.c main.c mod_redirect.c \
printf_depleted.c redirect_target_get.c redirect_target_icsf_.c ft_strjoinre.c\
modificators.c
OBJ = ft_atoi.o ft_bzero.o ft_chacc.o ft_clon.o ft_isalnum.o ft_isalpha.o \
ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o ft_lstdel.o \
ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o \
ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o \
ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o \
ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_sstrlen.o \
ft_sswap.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o \
ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o \
ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o \
ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o ft_list_size.o \
ft_list_last.o check_hub.o checker.o colors.o flag_checker.o flag_g_free.o \
ft_flag_e_2.o ft_flag_e.o ft_flag_f_2.o ft_flag_f.o ft_flag_g.o ft_flag_i.o \
ft_flag_o_u_x.o ft_flag_p.o ft_i_5.o ft_litoa.o ft_minus.o ft_proverka.o \
ft_strrejoin.o ft_strrejoinre.o ft_strrejoinren.o ft_strreplchar.o \
ft_strsearch.o ft_uitoa.o ft_width.o ft_strclen.o main.o mod_redirect.o \
printf_depleted.o redirect_target_get.o redirect_target_icsf_.o ft_strjoinre.o \
modificators.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror  -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
