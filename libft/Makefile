# Makefile for libft

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./

# Library name
NAME = libft.a

# Source files
SRCS =  ft_strlen.c  ft_isalpha.c ft_isdigit.c ft_memset.c \
       ft_isalnum.c ft_isprint.c ft_strlcpy.c ft_strlcat.c \
       ft_toupper.c ft_tolower.c ft_isascii.c ft_strncmp.c \
       ft_atoi.c ft_bzero.c ft_memmove.c \

# Directories
SRCS_DIR = ./
SRCS_PATH = $(addprefix $(SRCS_DIR), $(SRCS))

# Object files
OBJS = $(SRCS_PATH:%.c=%.o)

# Archive flags
ARFLAGS = rcs
RMFLAGS = -f

# Default rule
all: $(NAME)

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the static library
$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^
	ranlib $(NAME)

# Clean rule
clean:
	rm $(RMFLAGS) $(OBJS)

# Full clean rule
fclean: clean
	rm $(RMFLAGS) $(NAME)

# Rebuild rule
re: fclean all

# Phony targets
.PHONY: all clean fclean re
