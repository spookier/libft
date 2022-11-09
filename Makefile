# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Mandatory files
FILES =  ft_isalpha.c \

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