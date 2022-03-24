# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 16:28:26 by ghuertas          #+#    #+#              #
#    Updated: 2022/03/24 16:40:15 by ghuertas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror
RM_RF = rm -rfv 
NAME = libft.a

all: $(NAME)
$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)
clean: 
	$(RM_RF) $(OBJS)
fclean:	clean
	$(RM_RF) $(OBJS)
re:	fclean all
.PHONY: all clean fclean re
