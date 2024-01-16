NAME = Phonebook
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -Wunused -std=c++98
RM = rm -rf
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = ${SRC:%.cpp=%.o}

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re