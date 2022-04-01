# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 16:28:26 by ghuertas          #+#    #+#              #
#    Updated: 2022/03/31 21:20:37 by ghuertas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror
RM_RF = rm -rfv 
NAME = libft
LIBNAME = libft.a
S_NAME = .simple
B_NAME = .bonus

all: $(NAME)
$(NAME): $(S_NAME)
$(S_NAME):	$(OBJS)
	ar crs $(LIBNAME) $(OBJS)
	rm -f $(B_NAME)
	touch $(S_NAME)
$(B_NAME):	$(B_OBJS)
	ar crs $(LIBNAME) $(B_OBJS)
	rm -f $(S_NAME)
	touch $(B_NAME)
clean: 
	$(RM_RF) $(OBJS)
fclean:	clean
	$(RM_RF) $(OBJS) $(LIBNAME) $(S_NAME) $(B_NAME)
re:	fclean all
bonus: $(B_NAME)
.PHONY: all clean fclean re
