# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 12:08:55 by ngjokaj           #+#    #+#              #
#    Updated: 2023/11/23 12:28:31 by ngjokaj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = phonebook
SRC =	main.cpp Contact.cpp PhoneBook.cpp 

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic
RM = rm -f

OBJFILES = $(SRC:.cpp=.o)
GREEN		=	\e[92;5;118m
CURSIVE		=	\e[33;3m
TK			= 	\e[96;5;118m



$(TARGET): $(OBJFILES) $(SRC)
	$(CXX) $(CXXFLAGS) $(OBJFILES) -o $(TARGET)
	@echo "$(GREEN)    - phonebook ready.\n$(RESET)"


clean:
	rm -f $(OBJFILES)

fclean: clean
	@$(RM) $(TARGET)
	@echo "$(CURSIVE)	- Executable removed.$(RESET)"
	@echo "$(TK)	- o.files removed.$(RESET)"
	@(sleep 1 && clear)

.PHONY: all clean re