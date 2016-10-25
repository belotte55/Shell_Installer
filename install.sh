# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    install.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Belotte <Belotte1355@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/16 10:16:37 by Belotte           #+#    #+#              #
#    Updated: 2016/10/26 00:07:14 by pi               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

min_y=6
max_y=9

tput_x=33
tput_y=$min_y

tput_done=36
tput_ended=$((max_y+2))
IFS=''
home=`cd; pwd`

clear

echo '\t\tInstallation...'
echo ''
echo 'Select elements you want to install:'
echo "(if element is unchecked, it\'s already installed,)"
echo '(check them anyway will override previous files.)'
echo ''
echo '- ~/.zshrc                      [ ]'
echo '- ~/.vimrc                      [ ]'
echo '- ~/.vim                        [ ]'
echo '- ~/Documents/Programmes/Shell  [ ]'
echo ''
echo 'Press ENTER to valid.'

if [[ ! -e $home/.zshrc ]]; then
	values[0]=true
	tput cup $((tput_y+0)) $tput_x
	echo 'X'
else
	values[0]=false
fi

if [[ ! -e $home/.vimrc ]]; then
	values[1]=true
	tput cup $((tput_y+1)) $tput_x
	echo 'X'
else
	values[1]=false
fi

if [[ ! -d $home/.vim ]]; then
	values[2]=true
	tput cup $((tput_y+2)) $tput_x
	echo 'X'
else
	values[2]=false
fi

if [[ ! -d $home/Documents/Programs/Shell ]]; then
	values[3]=true
	tput cup $((tput_y+3)) $tput_x
	echo 'X'
else
	values[3]=false
fi


while true; do
	tput cup $tput_y $tput_x
	current_row=$tput_y-$min_y
	read -sn 1 key
	if [[ $key == '' && ${#key} == '0' ]]; then		# ENTER
		break
	elif [[ $key == ' ' && ${#key} == '1' ]]; then	# SPACE
		if [[ ${values[$current_row]} == true ]]; then
			echo ' '
			values[$current_row]=false
		else
			echo 'X'
			values[$current_row]=true
		fi
	elif [[ "$key" == $'\x1b' ]]; then
		read -sn 1 -t 1 tmp
		if [[ "$tmp" == '[' ]]; then
			read -sn 1 -t 1 tmp
			case "$tmp" in
				'A') # UP
					if [[ $tput_y -gt $min_y ]]; then
						tput_y=$((tput_y-1))
					fi
					;;
				'B') # DOWN
					if [[ $tput_y -lt $max_y ]]; then
						tput_y=$((tput_y+1))
					fi
					;;
			esac
		fi
		read -sn 5 -t 0
	fi
done

tput_y=$min_y

tput cup $tput_ended 0
echo '                             '

if [[ ${values[0]} == true ]]; then
	if [[ -e $home/.zshrc ]]; then
		rm $home/.zshrc
	fi
	cp srcs/zshrc srcs/zshrc.tmp
	tput cup $tput_ended 0
	tput_ended=$((tput_ended+3))
#	./custom_zshrc srcs/zshrc.tmp
	mv srcs/zshrc.tmp $home/.zshrc
	tput cup $tput_y $tput_done
	echo '√'
fi

tput_y=$((tput_y+1))

if [[ ${values[1]} == true ]]; then
	if [[ -e $home/.vimrc ]]; then
		rm $home/.vimrc
	fi
	cp srcs/vimrc $home/.vimrc
	echo "source $home/.vim/autoload/stdheader.vim" >> $home/.vimrc
	echo "source $home/.vim/autoload/myheader.vim" >> $home/.vimrc
	tput cup $tput_y $tput_done
	echo '√'
fi

tput_y=$((tput_y+1))

if [[ ${values[2]} == true ]]; then
	if [[ -d ~/.vim ]]; then
		rm -rf ~/.vim
	fi
	cp -r srcs/vim srcs/vim_tmp
	tput cup $tput_ended 0
	tput_ended=$((tput_ended+3))
	mv srcs/vim_tmp $home/.vim
	tput cup $tput_y $tput_done
	echo '√'
fi

tput_y=$((tput_y+1))

if [[ ${values[3]} == true ]]; then
	if [[ ! -d '~/Documents/Programs/Shell' ]]; then
		mkdir -p $home/Documents/Programs/Shell
	fi
	cp -nr srcs/shell_files/* $home/Documents/Programs/Shell/
	tput cup $tput_y $tput_done
	echo '√'
fi

tput cup $tput_ended 0

echo '################################################################################'
echo ''
echo '_git [<commit_message>]'
echo '	#git add --all && git commit -m `date` + <commit_message> && git push'
echo ''
echo '################################################################################'
