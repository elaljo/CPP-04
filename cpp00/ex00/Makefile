NAME = megaphone

g++ = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = megaphone.cpp\

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all