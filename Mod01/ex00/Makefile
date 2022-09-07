# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 17:29:35 by ebarguil          #+#    #+#              #
#    Updated: 2022/09/07 17:50:46 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie

INC		=	includes

CXX		=	c++
CXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC)
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

vpath %.cpp srcs

SRC		=	srcs/main.cpp \
			srcs/Zombie.cpp \
			srcs/newZombie.cpp \
			srcs/randomChump.cpp \

OBJ		=	$(SRC:srcs/%.cpp=objs/%.o)

all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CXX) $(CXFLAGS) -o $(NAME) $(SRC)

obj			:
				@if [ ! -d "./objs" ]; then\
					echo "mkdir -p objs";\
					mkdir -p objs;\
				fi
				@echo ""

objs/%.o	:	%.cpp
				$(CXX) -o $@ -c $< $(CXFLAGS)

clean		:
				$(RM) $(OBJ)
				$(RM) objs

fclean		:	clean
				$(RM) $(NAME)

fsa			:	fclean obj $(OBJ)
				$(CXX) $(CXFLAGS) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all clean fclean re
