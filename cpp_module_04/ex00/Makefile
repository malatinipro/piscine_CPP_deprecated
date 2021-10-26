NAME			=	ex00
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM				=	rm -rf
SRCS			=	./main.cpp ./animalClass.cpp ./catClass.cpp ./dogClass.cpp \
						./wrongAnimalClass.cpp ./wrongCatClass.cpp ./wrongDogClass.cpp

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
