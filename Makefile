NAME = push_swap

SRC =	main.c			\
		utils_1.c		\
		utils_2.c		\
		utils_3.c		\
		ops_1.c			\
		ops_2.c			\
		move_to_list.c	\
		sorting.c		\
		max.c			\
		indices.c		\
		butterfly.c		


OBJ = $(SRC:.c=.o)

RM = rm -rf

CC = gcc

CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) 


fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re, all, fclean, clean, libcomp 