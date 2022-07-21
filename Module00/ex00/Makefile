NAME = megaphone

SRC = megaphone.cpp

OBJ = megaphone.o

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo All set

.cpp.o : $(SRC)
	@c++ $(FLAGS) $(SRC) -c -o $(SRC:.cpp=.o)
	@echo Compiling....

clean :
	@rm -f $(OBJ)
	@echo Cleaning....

fclean : clean
	@rm -f $(NAME)
	@echo It\'s all clean

re : fclean all

.PHONY: all clean fclean re