# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    install.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Belotte <fbellott@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/05 17:40:36 by Belotte           #+#    #+#              #
#    Updated: 2015/08/06 13:23:41 by Belotte          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

echo "Installation..."

# zshrc
if [[ -f ~/.zshrc ]]; then
	read -p "File ~/.zshrc already exist. Overwrite ? (y/N) " -n 1 response
	case $response in
		'Y' | 'y')
			rm ~/.zshrc
			;;
	esac
	echo
fi
if [[ ! -f ~/.zshrc ]]; then
	cp srcs/zshrc srcs/zshrc.temp
	./custom_zshrc srcs/zshrc.temp
	mv srcs/zshrc.temp ~/.zshrc
fi

# shell directory and files
path='/Volumes/HDD/Drive/Programmes/Shell'
if [[ ! -d $path ]]; then
	read -p "$path directory doesn't exist. Create ? (Y/n) " -n 1 response
	case $response in
		'N' | 'n')
			;;
		*)
			mkdir -p $path
			;;
	esac
fi
if [[ -d "$path" ]]; then
	cp -r srcs/shell_files/* $path/
	echo "Shell files copied to $path."
fi

exit 0

