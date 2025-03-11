# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 01:23:11 by shurtado          #+#    #+#              #
#    Updated: 2025/03/11 18:58:47 by shurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libcute.a
TEST_PROG	=	program
CC			=	c++
AR			=	ar rcs
CPPFLAGS	=	-std=c++98 -g -Wall -Werror -Wextra -MMD -MP -Iinc

CLASSES		=	Color Emoji Frame

SRC			=	$(addprefix src/, $(foreach class, $(CLASSES), $(class)/$(class).cpp))
OBJS		=	$(SRC:%.cpp=obj/%.o)
DEPS		=	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "🔨 Creando librería estática $(NAME)..."
	$(AR) $@ $^

obj/%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	@echo "🗑️ Eliminando archivos objeto..."
	rm -rf obj

fclean: clean
	@echo "🗑️ Eliminando librería y ejecutables..."
	rm -f $(NAME) $(TEST_PROG)

re: fclean all

.PHONY: all clean fclean re
