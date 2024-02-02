NAME = ClapTrap

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

RM = rm -rf

SRC = main.cpp\
			ClapTrap.cpp\

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp ClapTrap.hpp
	$(g++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all