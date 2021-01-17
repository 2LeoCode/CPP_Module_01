NAME =		replace

SRC =		main.cpp
OBJ =		$(SRC:.cpp=.o)

CFLAGS =	-Wall -Werror -Wextra

all: $(NAME)
	@echo '$< is up to date.'

test: all
	@(\
		echo 'Creating test file';\
		touch testfile;\
		printf 'TestBonjour ceci est un testtest\ntest testttest test testtest' >> testfile\
	)

$(NAME): $(OBJ)
	@(\
		echo '\nCompiling $@';\
		clang++ $(CFLAGS) $^ -o $@\
	)

%.o: %.cpp
	@(\
		printf '\033[2K\rCompiling $<';\
		clang++ $(CFLAGS) -c $< -o $@\
	)

clean:
	@(\
		rm -rf $(OBJ);\
		echo 'Removed $(OBJ)'\
	)

fclean: clean
	@(\
		rm -rf $(NAME) testfile;\
		echo 'Removed $(NAME)\nRemoved testfile'\
	)

re: fclean all
