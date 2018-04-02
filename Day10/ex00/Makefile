# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 23:33:37 by brvalcas          #+#    #+#              #
#    Updated: 2018/02/28 16:22:18 by brvalcas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c\
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c

HEAD = includes/header.h

OBJET = ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

FLAG = -Werror -Wextra -Wall

all : $(NAME)

$(NAME) :
	gcc $(FLAG) -c -I $(HEAD) $(SRC)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJET)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
