NAME = doom

SRC =	./main.c \
		./logic_engine/logic_engine.c\
		./physics_engine/physics_engine.c\
		./render_engine/render_engine.c\
		./loop_engine/loop_engine.c\
		./control_functions/control_functions.c\
		./control_functions/game_init.c

OBJ = $(SRC:.c=.o)

INC =	-I./includes/

ERRFL = #-Wall -Wextra -g # -Werror

FL = `sdl2-config --cflags --libs` -lSDL2 #-F SDL2/ -framework SDL2 -framework SDL2_ttf -framework OpenCL

all: $(NAME)

$(OBJ): %.o: %.c
	@echo "\033[93mCompiling \033[0m$@"
	@cc $(INC) $(ERRFL) -c -o $@ $<

$(NAME): $(OBJ)
	@echo "\033[93mCompiling libft\033[0m"
	@make -C ./libft
	@echo "\033[93mCompiling $(NAME)\033[0m"
	@gcc $(ERRFL) $(INC) -o $@ $(OBJ) -L libft/ ./libft/libft.a $(FL)
	@echo "\033[92mDONE\033[0m"
	

clean:
	@echo "\033[91mDeleting libft objects\033[0m"
	@make -C libft/ clean
	@echo "\033[91mDeleting $(NAME) objects\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[91mDeleting libft.a\033[0m"
	@make -C libft/ fclean
	@echo "\033[91mDeleting $(NAME)\033[0m"
	@rm -f $(NAME)

re: fclean \
	all

.PHONY: all clean fclean re

.NOTPARALLEL: all clean fclean re
