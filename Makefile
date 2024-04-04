SRC = file.c \
		validation.c \
		
OBJ = ${SRC:.c=.o}
GFLAGS = -Wall -Wextra -Werror 
NAME = so_long
LIBFT = libft.a

all: $(NAME)

%.o: %.c
	@cc $(GFLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(LIBFT)
	@echo "making $(NAME)"
	@cc $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	@echo "making libft.."
	@make -C libft
	@mv libft/libft.a .

clean:
	@echo "cleaning.."
	@rm -f $(OBJ)
	@make -C libft clean
	@rm -rf $(LIBFT)

fclean: clean
	@echo "full cleaning.. "
	@rm -f $(NAME)

re: clean  
	rm -f $(OBJ)

.SILENT: re clean fclean 