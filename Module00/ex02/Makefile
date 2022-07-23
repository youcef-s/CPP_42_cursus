NAME = Account

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $^ -o $@
	@echo All set

%.o : %.cpp Account.hpp
	@c++ $(FLAGS) -c $< -o $@
	@echo Compiling....

clean :
	@rm -f $(OBJ)
	@echo Cleaning....

fclean: clean
	@rm -f $(NAME)
	@echo It\'s all clean

re : fclean all

.PHONY : all clean fclean re