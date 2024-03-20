CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wno-shadow
NAME = Diamond
#HEADER =
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<
clean:
	rm -f $(OBJS)
fclean:
	make clean
	rm -f $(NAME)
re:
	make fclean
	make all
.PHONY: clean fclean re