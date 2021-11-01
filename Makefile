# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 15:46:47 by pojea-lo          #+#    #+#              #
#    Updated: 2021/11/01 16:35:10 by pojea-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strnstr.c\
	  ft_atoi.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_substr.c\
		

OBJ = $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

RM = rm -r

all: $(NAME)

.o: .c
	@echo "Compiling: $<...."
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "da  igual"

$(NAME): $(OBJ)
	$(LIBC) $@ $^

clean:
	$(RM) $(OBJ)<F6>
	@echo "Objects files cleaned!"

fclean: clean
	$(RM) $(NAME)
	@echo "Exec file cleaned!"

re: fclean all

.PHONY: all clean fclean re
