# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:55:35 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/04 14:55:46 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex02
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
SRCS			=	./main.cpp ./animalClass.cpp ./catClass.cpp \
					./dogClass.cpp ./brainClass.cpp \

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
