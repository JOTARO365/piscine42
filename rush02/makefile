# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 15:06:37 by wiaon-in          #+#    #+#              #
#    Updated: 2025/06/07 16:40:56 by wiaon-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rush-02
SRC := main.c error_msg.c ft_strlen.c ft_strtok.c 

CC := cc

CFLAGS := -Wall -Wextra -Werror -g3

OBJ_DIR = src

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

$(OBJS_DIR)/%.o: %.c
		$(CC) $(CFLAGS) -Iinclude -c $< -o $@

$(NAME): $(OBJS) Makefile
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re :
		make fclean
		make

.PHONY : all clean fclean re
