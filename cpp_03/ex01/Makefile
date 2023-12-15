NAME = ScavTrap

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp \
	ScavTrap.cpp \
	ClapTrap.cpp

OUT = $(SRC:.cpp=.o)

all: $(NAME)Q

$(NAME): $(OUT)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OUT)

clean:
	rm -f $(OUT)
fclean: clean
	rm -f $(NAME)

re: fclean all
