NAME			=	ex01
CC				=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM				=	rm -rf
SRCS			=	./main.cpp ./Bureaucrat.cpp ./Form.cpp
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

.PHONY: 		all fclean clean re
