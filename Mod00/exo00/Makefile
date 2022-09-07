# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 17:29:35 by ebarguil          #+#    #+#              #
#    Updated: 2022/09/07 17:51:37 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CXX		=	c++
CXFLAGS	=	-std=c++98 -Wall -Wextra -Werror
RM		=	/usr/bin/rm -rf

SRC		=	megaphone.cpp

OBJ		=	$(SRC:%.cpp=objs/%.o)


all			:	obj $(NAME)

$(NAME)		:	$(OBJ)
				$(CXX) $(CXFLAGS) -o $(NAME) $(SRC)

obj			:
				mkdir -p objs

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
