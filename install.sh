# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    install.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Belotte <fbellott@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/05 17:40:36 by Belotte           #+#    #+#              #
#    Updated: 2015/08/06 21:28:13 by Belotte          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "Installation..."
echo "Cloning repo..."

git clone https://github.com/belotte55/Shell_Installer.git
cd Shell_Installer

# zshrc
if [ -f ~/.zshrc ]; then
	read -p "File ~/.zshrc already exist. Overwrite ? (y/N) " -n 1 response
	case $response in
		'Y' | 'y')
			echo
			read -p "Are you really sure you want replace your .zshrc ? (y/N) " \
				-n 1 resp
			case $resp in
				'Y' | 'y')
					rm ~/.zshrc
					echo
					;;
				'')
					;;
				*)
					echo
					;;
			esac
			;;
		'')
			;;
		*)
			echo
			;;
	esac
fi
if [ ! -f "~/.zshrc" ]; then
	cp srcs/zshrc srcs/zshrc.temp
	./custom_zshrc srcs/zshrc.temp
	mv srcs/zshrc.temp ~/.zshrc
fi

# shell directory and files
path='/Volumes/HDD/Drive/Programmes/Shell'
if [ ! -d "$path" ]; then
	read -p "$path directory doesn't exist. Create ? (Y/n) " -n 1 response
	case $response in
		'N' | 'n')
			;;
		*)
			mkdir -p $path
			;;
	esac
fi
if [ -d "$path" ]; then
	cp -r srcs/shell_files/* $path/
	echo "Shell files copied to $path."
fi

# vim
if [ -f ~/.vimrc ]; then
	read -p "Vim is already configured. Overwrite ? (y/N) " -n 1 response
	case $response in
		'Y' | 'y')
			rm ~/.vimrc
			echo
			;;
		'')
			;;
		*)
			echo
			;;
	esac
fi
if [ ! -f ~/.vimrc ]; then
	cp -r srcs/vim srcs/vim_temp
	./configure_vim_mail srcs/vim_temp/autoload/myheader.vim
	rm -rf ~/.vim
#	cp -r srcs/vim ~/.vim
	mv srcs/vim_temp ~/.vim
	cp srcs/vimrc ~/.vimrc
	echo 'Vim is now configured.'
fi

echo 'Done.'
exit 0
