# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 21:27:44 by canjugun          #+#    #+#              #
#    Updated: 2021/10/30 21:37:10 by canjugun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = project

SRCS = main.c \
	utils.c

all: $(NAME)

push_swap:
	gcc $(SRCS) -o push_swap

$(NAME): push_swap

clean:
	rm -f *.o

fclean: clean
	rm -f push_swap

re: fclean all