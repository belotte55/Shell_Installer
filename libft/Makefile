NAME	= run
CC		= gcc
S_DIR	= srcs/
O_DIR	= objs/
I_DIR	= -I includes/
FLAGS	= -Wall -Wextra -Werror $(I_DIR) $(LIBS_DIR)
FILES	= ft_assign_var.c ft_atoi.c ft_bzero.c ft_display_grid.c ft_erase_to.c ft_fact.c ft_getabs.c ft_init_var.c ft_insert_at.c ft_is_char_in.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_ln.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_point.c ft_pos_of_first_c.c ft_pow.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_color.c ft_putstr_fd.c ft_size.c ft_sqrt.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strreduce.c ft_strrev.c ft_strrmc.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_strtrim_c.c ft_tolower.c ft_toupper.c 
LIBS_F	= ft
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
