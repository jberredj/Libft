NAME		= 	libft.a
CC			= 	clang
CFLAGS		= 	-Wall -Werror -Wextra -std=c99

INCLUDES_F	= 	libft.h libft_bonus.h

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

OBJS		=	${SRCS:.c=.o}

all: $(NAME)
	
$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

bonus : $(OBJS) $(OBJS_BONUS)
	ar cr $(NAME) $(OBJS) $(OBJS_BONUS)

$(OBJS):
	$(CC) -c $(SRCS) $(CFLAGS) 

$(OBJS_BONUS):
	$(CC) -c $(SRCS_BONUS) $(CFLAGS)

so:
	gcc -shared -o libft.so $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) 

fclean:
	make clean
	rm -f $(NAME) libft.so

re:
	make fclean
	make all
