# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:26:37 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/04 19:08:21 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex02
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
SRCS			=	./main.cpp ./Bureaucrat.cpp ./Form.cpp \
					./PresidentialPardonForm.cpp \
					./RobotomyRequestForm.cpp \
					./ShrubberyCreationForm.cpp

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

test			:	$(NAME)
					./ex02

.PHONY: 			all fclean clean re
