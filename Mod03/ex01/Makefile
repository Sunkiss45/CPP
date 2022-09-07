# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 17:53:47 by ebarguil          #+#    #+#              #
#    Updated: 2022/09/07 10:44:31 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	clap

INC		=	includes

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC)
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

vpath %.cpp srcs

SRC		=	srcs/main.cpp \
			srcs/ClapTrap.cpp \
			srcs/ScavTrap.cpp \

OBJ		=	$(SRC:srcs/%.cpp=objs/%.o)

all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj			:
				@if [ ! -d "./objs" ]; then\
					echo "mkdir -p objs";\
					mkdir -p objs;\
				fi
				@echo ""

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
