# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:31:54 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/04 19:12:14 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex03
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
SRCS			=	./main.cpp ./Bureaucrat.cpp ./Form.cpp \
					./PresidentialPardonForm.cpp \
					./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp \
					./Intern.cpp

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
					./ex03

.PHONY: 			all fclean clean re
