SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	=  ${SRCS:.c=.o}

HEADERS	= includes/

NAME	= libft.a

%.o: %.c
	cc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o $@


${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all