NAME = rush02

SRC_DIR = ./srcs/
INCLUDE_DIR = ./includes/
SRCS = support_fcts.c tab_handler.c main.c support_fcts2.c parse_dictionnary.c ft_strjoin.c ft_split.c parse_inputs.c ft_atoi.c
OBJS = $(addprefix $(SRC_DIR), $(SRCS:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I $(INCLUDE_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
