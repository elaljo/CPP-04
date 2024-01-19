NAME = Harl

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

HEADER = Harl.hpp\

RM = rm -rf

SRC = main.cpp\
			Harl.cpp\
			
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp $(HEADER)
	$(g++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re