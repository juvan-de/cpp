# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: julesvanderhoek <julesvanderhoek@studen      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/24 15:50:53 by julesvander   #+#    #+#                  #
#    Updated: 2021/10/13 15:16:35 by juvan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME 		= 	Fixed

SOURCES		= 	Fixed.cpp \
				Point.cpp \
				main.cpp

OBJECTS 	=	${SOURCES:%.cpp=%.o}

FLAGS 		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	clang++


GREEN 		= 	\033[38;5;46m
WHITE 		= 	\033[38;5;15m
GREY 		= 	\033[38;5;8m
ORANGE 		= 	\033[38;5;202m
RED 		= 	\033[38;5;160m

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)Compiling...				$(WHITE)$<"
	@$(COMPILE) -c $(SOURCES)

$(NAME): $(OBJECTS)
	@$(COMPILE) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)Use exe - $(NAME)"

clean:
	@echo "$(RED)Deleting objectfiles"
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@echo "$(RED)Deleting executable"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
