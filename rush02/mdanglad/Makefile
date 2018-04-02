# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 13:40:35 by brvalcas          #+#    #+#              #
#    Updated: 2018/02/25 20:11:02 by brvalcas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC_COLL_0 =	srcs/colle_00.c

SRC_COLL_1 =	srcs/colle_01.c

SRC_COLL_2 =	srcs/colle_02.c

SRC_COLL_3 =	srcs/colle_03.c

SRC_COLL_4 =	srcs/colle_04.c

SRC =  			srcs/ft_putchar.c

SRC_2 =			srcs/ft_atoi.c\
				srcs/ft_putnbr.c

LIB =			libft.a

MAIN =			srcs/main.c

MAIN_2 =		srcs/compare.c\
				srcs/main2.c

HEAD =			header/header.h

OBJET =			ft_atoi.o ft_putchar.o ft_putnbr.o

FLAG =			-Werror -Wextra -Wall

all : $(NAME)

$(NAME) : all
	gcc $(FLAG) $(SRC_COLL_0) -I $(HEAD) $(MAIN) $(SRC) $(SRC_2)
	mv a.out colle_00
	mv colle_00 exe/
	gcc $(FLAG) $(SRC_COLL_1) -I $(HEAD) $(MAIN) $(SRC) $(SRC_2)
	mv a.out colle_01
	mv colle_01 exe/
	gcc $(FLAG) $(SRC_COLL_2) -I $(HEAD) $(MAIN) $(SRC) $(SRC_2)
	mv a.out colle_02
	mv colle_02 exe/
	gcc $(FLAG) $(SRC_COLL_3) -I $(HEAD) $(MAIN) $(SRC) $(SRC_2)
	mv a.out colle_03
	mv colle_03 exe/
	gcc $(FLAG) $(SRC_COLL_4) -I $(HEAD) $(MAIN) $(SRC) $(SRC_2)
	mv a.out colle_04
	mv colle_04 exe/
	gcc $(FLAG) -c -I $(HEAD) $(SRC) $(SRC_2)
	ar rc $(LIB) $(OBJET)
	ranlib $(LIB)
	gcc $(FLAG) $(LIB) $(MAIN_2)
	mv a.out $(NAME)

clean : 
	/bin/rm -f $(OBJET)
	/bin/rm -f $(LIB)

fclean : clean
	/bin/rm -f $(NAME)
	/bin/rm -f exe/colle_00\
		exe/colle_01\
		exe/colle_02\
		exe/colle_03\
		exe/colle_04

re : fclean $(NAME)
