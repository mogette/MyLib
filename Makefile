# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/30 13:02:33 by clapeyre          #+#    #+#              #
#    Updated: 2016/04/22 15:46:28 by clapeyre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
	ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c \
	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_abs.c ft_lstnew.c ft_lstdelone.c \
	ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	ft_islower.c ft_isupper.c get_next_line.c

OBJ = $(SRC:.c=.o)

CC = gcc -c

WFLAGS = -Wall -Werror -Wextra

INC = -I includes

all: $(NAME)

$(NAME):
	@echo "\033[41m \033[37m >^..^<\t./|MeowInvocation|\.\t>^..^< \033[0m"
	@echo "\033[45m \033[31m ^-.-^ ZzzzzzzzZZZZzzzzzzzzzzzzzz\t \033[0m"
	@$(CC) $(WFLAGS) $(SRC) $(INC)
	@echo "\033[41m \033[35m ^-.-^ ZzzzzzzzZZZZzzzzzzzzzzzzzz\t \033[0m"
	@ar -rc $(NAME) $(OBJ)
	@echo "\033[45m \033[31m ^-.-^ ZzzzzzzzZZZZzzzzzzzzzzzzzz\t zzZ\033[0m"
	@ranlib $(NAME)
	@echo "\033[41m \033[37m ฅ•ω•ฅ\t    ! Wild libft appaeared !\tฅ•ω•ฅ \033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[41m \033[37m  >'o'<\t! Bye Bye My Objects \t>'o'< \033[0m"

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
