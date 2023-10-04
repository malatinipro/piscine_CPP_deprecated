# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:21:24 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/04 12:47:18 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex00
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
SRCS			=	./main.cpp ./Bureaucrat.cpp

OBJS 			=	${SRCS:.cpp=.o}

.cpp.o:
					$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
				 	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
					$(RM) ${OBJS}

fclean			:	clean
					$(RM) $(NAME)

re				: 	fclean all

.PHONY: 			all fclean clean re
