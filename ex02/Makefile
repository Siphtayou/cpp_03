CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = FragTrap
SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
