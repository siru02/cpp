CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombieHorde
#HEADER =
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -g3
clean:
	rm -f $(OBJS)
fclean:
	make clean
	rm -f $(NAME)
re:
	make fclean
	make all
.PHONY: clean fclean re