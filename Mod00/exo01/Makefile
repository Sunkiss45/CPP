# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 17:06:46 by ebarguil          #+#    #+#              #
#    Updated: 2022/09/07 17:51:36 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

INC		=	includes

CXX		=	c++
CXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC)
RM		=	/usr/bin/rm -rf

vpath %.cpp srcs

SRC		=	srcs/PhoneBook.cpp \
			srcs/main.cpp \
			srcs/Contact.cpp \

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

objs/%.o	:	srcs/%.cpp
				$(CXX) -o $@ -c $< $(CXFLAGS)

clean		: 
				$(RM) $(OBJ)
				$(RM) objs

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all obj clean fclean re
