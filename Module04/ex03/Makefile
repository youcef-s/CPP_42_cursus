SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp  MateriaSource.cpp

HDR = AMateria.hpp Character.hpp Cure.hpp Ice.hpp \
	ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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