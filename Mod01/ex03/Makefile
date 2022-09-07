# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 14:37:14 by ebarguil          #+#    #+#              #
#    Updated: 2022/09/07 17:50:36 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	attacks

INC		=	includes

CXX		=	c++
CXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC)
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

vpath %.cpp srcs

SRC		=	srcs/main.cpp \
			srcs/HumanA.cpp \
			srcs/HumanB.cpp \
			srcs/Weapon.cpp \

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
