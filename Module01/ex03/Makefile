NAME =  UnnecessaryViolence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HDR = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $^ -o $@
	@echo All set

%.o : %.cpp $(HDR)
	@c++ $(FLAGS) -c $< -o $@
	@echo Compiling.......

clean :
	@rm -f $(OBJ)
	@echo Cleaning.........

fclean : clean
	@rm -f $(NAME)
	@echo All clean

re : fclean all

.PHONY: all clean fclean re