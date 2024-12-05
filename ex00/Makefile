# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2024/12/05 12:16:22 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = megaphone.cpp
NAME = megaphone

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -o $@ $(SRCS)
	
clean:
	

fclean: clean
	rm -f $(NAME)

re: fclean all
