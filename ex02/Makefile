NAME = Account

SRCS = Account.cpp \
	   tests.cpp 

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
