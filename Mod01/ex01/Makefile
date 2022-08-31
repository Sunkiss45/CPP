# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 17:29:35 by ebarguil          #+#    #+#              #
#    Updated: 2022/08/31 18:55:19 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie

INC		=	includes

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC)
RM		=	/usr/bin/rm -rf

vpath %.cpp srcs

SRC		=	srcs/main.cpp \
			srcs/Zombie.cpp \
			srcs/zombieHorde.cpp \

OBJ		=	$(SRC:srcs/%.cpp=objs/%.o)


all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj			:
				mkdir -p objs

objs/%.o	:	%.cpp
				$(CC) -o $@ -c $< $(CFLAGS)

clean		:
				$(RM) $(OBJ)
				$(RM) objs

fclean		:	clean
				$(RM) $(NAME)

fsa			:	fclean obj $(OBJ)
				$(CC) $(CFLAGS) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all clean fclean re
