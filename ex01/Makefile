NAME = awfully_terrible_phone_book

SRCS = main.cpp \
Contact.cpp \
Phonebook.cpp \
utils.cpp

OBJS = $(SRCS:.cpp=.o)

CC=clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^ 

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
