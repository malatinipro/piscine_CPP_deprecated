NAME = PhoneBook
SRCS = ./PhonebookClass.cpp ContactClass.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
COMPILER = clang++

.cpp.o:
	$(COMPILER) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	${OBJS}
					${COMPILER} ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	 			${RM} ${OBJS}

fclean:	clean
				${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
