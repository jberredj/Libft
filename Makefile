# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/03 13:41:15 by jberredj          #+#    #+#              #
#    Updated: 2020/12/03 13:41:17 by jberredj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
CC			= 	clang
CFLAGS		= 	-Wall -Werror -Wextra -std=c99

FT_IS		= 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c

FT_LST		= 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
				ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

FT_MEM		=	ft_bzero.c ft_calloc.c ft_memccpy.c ft_memcpy.c ft_memcmp.c ft_memchr.c \
				ft_memmove.c ft_memset.c

FT_PUT		=	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FT_STR		=	ft_atoi.c ft_itoa.c ft_intlen.c ft_cw_sep.c ft_split.c ft_strchr.c \
				ft_strrchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c \
				ft_toupper.c

LIBS		=	ft_is ft_lst ft_mem ft_put ft_str

all: $(LIBS) $(NAME)
	
$(NAME): lib 

ft_is: objs
	$(CC) -I includes/ -c $(addprefix srcs/is/, $(FT_IS)) $(CFLAGS)
	mv *.o objs/

ft_lst: ft_mem objs
	$(CC) -I includes/ -c $(addprefix srcs/lst/, $(FT_LST)) $(CFLAGS)
	mv *.o objs/

ft_mem: objs
	$(CC) -I includes/ -c $(addprefix srcs/mem/, $(FT_MEM)) $(CFLAGS)
	mv *.o objs/

ft_put: ft_str objs
	$(CC) -I includes/ -c $(addprefix srcs/put/, $(FT_PUT)) $(CFLAGS)
	mv *.o objs/

ft_str: ft_is ft_mem objs
	$(CC) -I includes/ -c $(addprefix srcs/str/, $(FT_STR)) $(CFLAGS)
	mv *.o objs/

so:
	$(CC) -shared -o libft.so objs/*.o

lib: 
	ar cr $(NAME) objs/*.o

objs:
	mkdir -p objs

clean:
	rm -f *.o
	rm -rf objs

fclean:
	rm -f $(NAME)
	make clean

re:
	make fclean
	make all
