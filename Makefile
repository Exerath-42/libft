HEADER		= ./libft.h
HEADER_FLAG	= -I ./ 
SRCS		=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_strjoin.c ft_strlen.c ft_isalpha.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
				ft_strlcpy.c ft_strlcat.c ft_memcpy.c ft_memset.c ft_memccpy.c \
				ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
				ft_calloc.c ft_substr.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c
OBJS 		= $(SRCS:.c=.o)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RAN			= ranlib
LIBRARY 	= libft.a

all:		$(OBJS)
				@ar rc $(LIBRARY) $(OBJS)

.c.o:		$(HEADER_FLAG) $(HEADER)
				@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			@rm -f ./srcs/*.o

fclean:		clean
			@rm -f ./*.a ./*.o

re:			fclean all

.PHONY: 	all clean fclean re
