# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/18 11:45:43 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/08/20 11:38:07 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
HEADER = libasm.h
SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s
OBJ = $(SRC:.s=.o)
FLAGS = -fmacho64 

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s $(HEADER)
	nasm $(FLAGS) -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	gcc -L. -lasm main.c
	./a.out
