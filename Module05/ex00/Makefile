NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp

HDR = Bureaucrat.hpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CFLAGS) $^ -o $(NAME)

%.o : %.cpp $(HDR)
	c++ $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re