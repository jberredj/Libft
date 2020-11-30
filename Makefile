NAME		= 	libft.a
CC			= 	clang
CFLAGS		= 	-Wall -Werror -Wextra -std=c99

INCLUDES_F	= 	libft.h

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c	ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJS		=	${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

$(OBJS):
	$(CC) -c $(SRCS) $(CFLAGS)

so:
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS) 

fclean:
	make clean
	rm -f $(NAME) libft.so

re:
	make fclean
	make all
