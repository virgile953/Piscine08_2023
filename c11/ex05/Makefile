CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = support_fcts.c main.c op_handler.c input_parser.c atoi.c suport_fcts2.c
OBJS = $(SRCS:.c=.o)

NAME = do-op

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

.PHONY: all clean
