NAME = PhoneBook

g++ = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = Contact.hpp\
					PhoneBook.hpp\

RM = rm -rf

SRC = PhoneBook.cpp\
			Contact.cpp\
			main.cpp

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