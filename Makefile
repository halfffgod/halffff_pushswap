NAME = push_swap
B_NAME = checker
FLAGS = -Wall -Wextra -Werror

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
		butterfly.c		\
		parsing.c	

SRC_B = utils_1.c								\
		utils_2.c								\
		utils_3.c								\
		ops_1.c 								\
		ops_2.c									\
		move_to_list.c							\
		indices.c								\
		parsing.c								\
		bonus_checker.c							\
		bonus_utils.c							\
		bonus_ops1.c							\
		bonus_ops2.c							\
		get_next_line.c							\
		get_next_line_utils.c 


OBJ = $(patsubst %.c, %.o, $(SRC))
OBJ_B = $(patsubst %.c, %.o, $(SRC_B))

all : $(NAME)

$(NAME) : $(OBJ) Makefile push_swap.h
	@gcc $(FLAGS) $(OBJ) -o $(NAME)

bonus : $(B_NAME) 

$(B_NAME) : $(OBJ_B) Makefile bonus.h
	@gcc $(FLAGS) $(OBJ_B) -o $(B_NAME)

%.o : %.c
	@gcc $(FLAGS) -c $< -o $@

clean : 
	@rm -rf $(OBJ) $(OBJ_B)

fclean : clean
	@rm -rf $(NAME) $(B_NAME)

re : fclean $(NAME) $(B_NAME)

.PHONY : re fclean clean all bonus