# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 16:28:26 by ghuertas          #+#    #+#              #
#    Updated: 2022/04/03 23:49:50 by ghuertas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =			ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				

BONUS_SRC =		ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				
				
OBJS = $(SRCS:.c=.o)
B_OBJS = $(BONUS_SRC:.c=.o)
CC = gcc

CC_FLAGS = -Wall -Wextra -Werror
RM_RF = rm -rf
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
bonus: $(B_NAME)
clean:
	$(RM_RF) $(OBJS) $(B_OBJS)
fclean: clean
	$(RM_RF) $(OBJS) $(LIBNAME) $(S_NAME) $(B_NAME)
re: fclean all
.PHONY: clean fclean
