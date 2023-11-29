# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:40:27 by ngjokaj           #+#    #+#              #
#    Updated: 2023/11/21 10:21:18 by ngjokaj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


TARGET = megaphone


CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf


GREEN		=	\e[92;5;118m
CURSIVE		=	\e[33;3m


$(TARGET): megaphone.cpp
	$(CXX) $(CXXFLAGS) megaphone.cpp -o $(TARGET)
	@printf "$(GREEN)    - megaphone ready.\n$(RESET)"


clean:
	rm -f $(TARGET)

fclean:
	@$(RM) $(TARGET)
	@printf "$(CURSIVE)    - Executable removed.$(RESET)\n"
	@(sleep 1 && clear)

.PHONY: all clean re
