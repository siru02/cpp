CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out
#HEADER =
SRCS = main.cpp Fixed.cpp
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