NAME = Polymorphism

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

RM = rm -rf

HEADER = Animal.hpp\
					Cat.hpp\
					Dog.hpp\
					WrongCat.hpp\
					WrongAnimal.hpp\

SRC = main.cpp\
			Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			WrongCat.cpp\
			WrongAnimal.cpp\
			

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