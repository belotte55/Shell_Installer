# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Belotte <fbellott@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/06 14:41:50 by Belotte           #+#    #+#              #
#    Updated: 2015/08/06 15:08:12 by Belotte          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= configure_vim_mail
CC		= gcc
S_DIR	= 
I_DIR	= -I /Volumes/HDD/Drive/Programmes/C/Lib/includes 
LIB		= /Volumes/HDD/Drive/Programmes/C/Lib/libft.a
FLAGS	= -Wall -Wextra -Werror $(I_DIR)
FILES	= main_vim.c 
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
