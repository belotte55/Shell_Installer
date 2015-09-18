NAME	= run
CC		= gcc
S_DIR	= 
I_DIR	= -I /Users/Belotte/Documents/Programs/C/Lib/includes 
LIB		= /Users/Belotte/Documents/Programs/C/Lib/libft.a
FLAGS	= -Wall -Wextra -Werror $(I_DIR)
FILES	= main_vimrc.c 
SRC		= $(addprefix $(S_DIR),$(FILES))
OBJS	= $(FILES:.c=.o)
RM		= rm -f

all: 		$(NAME)

$(NAME): 	$(OBJS)
	#ar rc $(NAME) $(OBJS)
	#ranlib $(NAME)
	$(CC) $(FLAGS) $(LIB) $^  -o $@
	@make clean
	@echo "Done."

%.o:		$(S_DIR)%.c
	$(CC) -c $(FLAGS) $<

clean:
	@$(RM) $(OBJS)

fclean: 	clean
	@$(RM) $(NAME)
	@echo "Clear."

re:			fclean all
