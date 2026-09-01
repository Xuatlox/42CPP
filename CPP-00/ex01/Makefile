NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
