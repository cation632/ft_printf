# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 16:47:51 by cmaria-m          #+#    #+#              #
#    Updated: 2023/01/27 21:07:10 by cmaria-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_nbrs.c ft_word.c ft_printf.c\

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(SRC:.c=.o)
			ar rc $(NAME) $(SRC:.c=.o)
clean:
	$(RM)	$(SRC:.c=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)