# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2024/12/05 15:35:25 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = mapb.cpp
HEADER = mapb.hpp
NAME = mapb

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -o $@ $(SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
