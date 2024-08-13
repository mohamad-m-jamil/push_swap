NAME                = push_swap

LIBFT               = ./libft/libft.a
INC                 = inc/
SRC_DIR             = srcs/
OBJ_DIR             = obj/

CC                  = gcc
CFLAGS              = -Wall -Werror -Wextra -I $(INC) -g
RM                  = rm -f

PUSH_SWAP_DIR       = $(SRC_DIR)handle_errors.c \
	  $(SRC_DIR)init_a_to_b.c \
	  $(SRC_DIR)init_b_to_a.c \
	  $(SRC_DIR)push_swap.c \
	  $(SRC_DIR)stack_init.c \
	  $(SRC_DIR)push_op.c \
	  $(SRC_DIR)reverse_rotate_op.c \
	  $(SRC_DIR)rotate_op.c \
	  $(SRC_DIR)swap_op.c \
	  $(SRC_DIR)sort_stacks.c \
	  $(SRC_DIR)sort_three.c \
	  $(SRC_DIR)push_swap_utils.c \
	  $(SRC_DIR)rotate_both.c 

SRCS                = $(PUSH_SWAP_DIR)

OBJ                 = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

start:              
	@$(MAKE) all

$(LIBFT):
	@$(MAKE) -C ./libft

all:                $(NAME)

$(NAME):            $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o:      $(SRC_DIR)%.c 
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(MAKE) clean -C ./libft

fclean:             clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C ./libft

re:                 fclean all

.PHONY:             start all clean fclean re
