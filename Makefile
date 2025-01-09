CC = cc 

LIB_DIR = libft
LIBFT = $(LIB_DIR)/libft.a

CFLAGS = -Wall -Wextra -Werror -g

OBJ_DIR = obj

SRC = pipex.c \
	  pipex_utils.c

OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

NAME = pipex

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -Iincludes -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(OBJS) -L$(LIB_DIR) -lft -o $(NAME)

$(LIBFT):
	make -C $(LIB_DIR)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)
	make clean -C $(LIB_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all
