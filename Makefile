CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = gcc

all :
		@cd sources/ft_printf && make all
		@cd sources/libft && make all
		@$(CC) $(CFLAGS) server.c sources/ft_printf/libftprintf.a sources/libft/libft.a -o server
		@$(CC) $(CFLAGS) client.c sources/ft_printf/libftprintf.a sources/libft/libft.a -o client

clean :
		@cd sources/ft_printf && make clean
		@cd sources/libft && make clean
		@$(RM) server
		@$(RM) client

fclean :clean
		@cd sources/ft_printf && make fclean
		@cd sources/libft && make fclean

re :	fclean all
		@cd sources/ft_printf && make re
		@cd sources/libft && make re