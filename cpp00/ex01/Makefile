CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
HEADER = Contact.hpp PhoneBook.hpp
SRCS = PhoneBook.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)

#-I 헤더경로기준으로 경로추가


all: $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
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