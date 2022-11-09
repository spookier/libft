# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acostin <acostin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 14:13:22 by acostin           #+#    #+#              #
#    Updated: 2022/11/09 16:08:47 by acostin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Mandatory files
FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	
	
# Transform .c files into .o
OBJ_FILES = $(FILES:.c=.o)


all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

# Clean all object files created
clean : 
	rm -rf *.o

# Clean all object files + the library created
fclean : 
	rm -rf *.o
	rm -rf $(NAME)

# Delete everything then rebuild
re : fclean all

.PHONY : all clean fclean re