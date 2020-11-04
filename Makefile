# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 14:31:40 by llemmiwi          #+#    #+#              #
#    Updated: 2020/11/04 14:31:40 by llemmiwi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -I$(INC_DIR)

SRC_D = ./srcs/
SRCS = $(addprefix $(SRC_D), $(SRC))
SRC =		ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strrchr.c \
			ft_split.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strncmp.c\
			ft_calloc.c \

OBJ_D = ./obj/
OBJS = $(addprefix $(OBJ_D), $(OBJ))
OBJ = $(SRC:.c=.o)

INC_D = ./includes/
INCS = $(addprefix $(INC_D), $(INC))
INC = libft.h

all: $(NAME)

$(NAME): $(OBJ_D) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_D)%.o: $(SRC_D)%.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_D):
	@mkdir -p $(OBJ_D)

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_D)

fclean: clean
	@rm -f $(NAME)

re: fclean all