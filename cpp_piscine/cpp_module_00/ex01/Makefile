# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:01:38 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/04 18:07:34 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		PhoneBook
SRCS =		./PhonebookClass.cpp ContactClass.cpp main.cpp

OBJS =		${SRCS:.cpp=.o}
FLAGS =		-Wall -Wextra -Werror -std=c++98
RM =		rm -rf
COMPILER =	clang++

.cpp.o:
			$(COMPILER) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	${OBJS}
			${COMPILER} ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	 		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
