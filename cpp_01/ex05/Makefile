NAME = Harl

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Harl.cpp \

OUT = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OUT)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OUT)

clean:
	rm -f $(OUT)
fclean: clean
	rm -f $(NAME)

re: fclean all
