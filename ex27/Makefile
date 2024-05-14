# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itahri <itahri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 13:21:19 by itahri            #+#    #+#              #
#    Updated: 2024/05/14 13:22:11 by itahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = display_file.c

OBJ = $(SRC:.c=.o)

HEADER = display_file.h

NAME = ft_display_file

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Clean the object files
clean:
	rm -f $(OBJ)

# Clean the object files and the executable
fclean: clean
	rm -f $(NAME)