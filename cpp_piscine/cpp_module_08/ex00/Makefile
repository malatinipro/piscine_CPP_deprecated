NAME			=	ex00
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
SRCS			=	./main.cpp
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
					./ex00

.PHONY: 			all fclean clean re
