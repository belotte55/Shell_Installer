NAME	= run
CC		= gcc
S_DIR	= srcs/
O_DIR	= objs/
I_DIR	= -I includes/
FLAGS	= -Wall -Wextra -Werror $(I_DIR) $(LIBS_DIR)
FILES	= ft_file_clear.c ft_file_close.c ft_file_getnc.c ft_file_insert.c ft_file_insert_at.c ft_file_move_by.c ft_file_move_to.c ft_file_read.c ft_file_write.c ft_free_file.c ft_open.c ft_open_fd.c 
LIBS_F	= file ft
SRC		= $(addprefix $(S_DIR),$(FILES))
OBJS	= $(addprefix $(O_DIR),$(FILES:.c=.o))
LIBS	= $(addprefix -L. -l,$(LIBS_F))
RM		= rm -f

all: 		$(NAME)

$(NAME): 	$(OBJS) $(O_DIR)main.o
	@$(CC) $(FLAGS) $(LIBS) $^ -o $@
	@echo "./[0;34m$(NAME)[0;1m created."
	@echo "[0;1mDone."

$(O_DIR)%.o:		$(S_DIR)%.c
	@echo "[0;33m$<[0;37m"
	@echo "↪︎- [0;32m$@[0;1m"
	@$(CC) $(FLAGS) -c $< -o $@

$(O_DIR)main.o: main.c
	@echo "[0;33m$<[0;37m"
	@echo "↪︎- [0;32m$@[0;1m"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: 	clean
	@$(RM) $(NAME)
	@echo "[0;1mClear."

re:			fclean all

.PHONY: re clean fclean all
