SRCS = ft_printf.c includes.c extra.c

OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a


$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all : $(NAME)
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all