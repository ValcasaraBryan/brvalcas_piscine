
NAME = do-op

SRCS = do_op.c\
	   ft_atoi.c\
	   ft_putnbr.c\
	   ft_putchar.c\
	   ft_putstr.c\
	   ft_strdup.c\
	   point_f.c\
	   check_operator.c

MAIN = main.c

HEAD = header.h

LIB = libft.a

OBJET = do_op.o\
		ft_atoi.o\
		ft_putnbr.o\
		ft_putchar.o\
		ft_putstr.o\
		ft_strdup.o\
		point_f.o\
		check_operator.o

FLAG = -Werror -Wall -Wextra

$(NAME) : all

all :
	gcc -c $(FLAG) -I $(HEAD) $(SRCS)
	ar rc $(LIB) $(OBJET)
	ranlib $(LIB)
	/bin/rm *.o
	gcc $(FLAG) $(LIB) $(MAIN) -o $(NAME)

clean :
	/bin/rm -rf $(OBJET)

fclean : clean
	/bin/rm -rf $(LIB)
	/bin/rm -rf $(NAME)

re : fclean all
