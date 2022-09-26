SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(OBJ)
	c++ $(CFLAGS) $^

%.o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f a.out

re : fclean all

.PHONY : all clean fclean re