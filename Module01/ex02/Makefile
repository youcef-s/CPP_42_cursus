NAME =  Brain

SRC = main.cpp

OBJ = main.o

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $^ -o $@
	@echo All set

%.o : %.cpp
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