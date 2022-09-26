NAME = convert

SRC = main.cpp Converter.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : all

all : $(OBJ)
	c++ $(CFLAGS) $^ -o $(NAME)

%.o : %.cpp Converter.hpp
	c++ $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re