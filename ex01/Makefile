NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc

SRCS = \
    src/main.cpp \
    src/Contact.class.cpp \
    src/Phonebook.class.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp inc/Contact.class.hpp inc/Phonebook.class.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re