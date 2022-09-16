SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(OBJ)
	@c++ $(FLAGS) $^
	@echo All set

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
	@c++ $(FLAGS) -c $< -o $@
	@echo Compiling.....

clean :
	@rm -f $(OBJ)
	@echo Cleaning......

fclean : clean
	@rm -f a.out
	@echo All clean

re : fclean all

.PHONY : all clean fclean re