# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 18:25:37 by malatini          #+#    #+#              #
#    Updated: 2023/10/04 18:23:19 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone
SRCS =		./megaphone.cpp
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

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY:		all clean fclean re .cpp.o test
