NAME = Megaphone

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OUT = $(SRC:.cpp=.o)

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)
fclean: clean
	rm -f $(OUT)

re: fclean all