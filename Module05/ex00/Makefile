SRC = main.cpp Bureaucrat.cpp

HDR = Bureaucrat.hpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(OBJ)
	c++ $(CFLAGS) $^

%.o : %.cpp $(HDR)
	c++ $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f a.out

re : fclean all

.PHONY : all clean fclean