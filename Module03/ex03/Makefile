NAME = DiamondTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $^ -o $(NAME)
	@echo All set

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	@c++ $(FLAGS) -c $< -o $@
	@echo Compiling.....

clean :
	@rm -f $(OBJ)
	@echo Cleaning......

fclean : clean
	@rm -f $(NAME)
	@echo All clean

re : fclean all

.PHONY : all clean fclean re