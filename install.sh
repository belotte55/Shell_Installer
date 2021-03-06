# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    install.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Belotte <Belotte@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/16 10:16:37 by Belotte           #+#    #+#              #
#    Updated: 2017/07/23 16:49:42 by fbellott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

DIR=`dirname "$BASH_SOURCE"`

min_y=6
max_y=9

tput_x=33
tput_y=$min_y

tput_done=36
tput_ended=$((max_y+2))
IFS=''
home=`cd; pwd`

clear

echo 'Installation...'
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
	tput cup $tput_ended 0
	tput_ended=$((tput_ended+3))
	cp $DIR/srcs/zshrc ~/.zshrc
	read -p "What's your pseudo ?"$'\n' pseudo
	vim -e -c ":%s/PSEUDO='.*'/PSEUDO='${pseudo}'/" -c ':wq' ~/.zshrc
	tput cup $tput_y $tput_done
	echo '√'
fi

tput_y=$((tput_y+1))

if [[ ${values[1]} == true ]]; then
	if [[ -e $home/.vimrc ]]; then
		rm $home/.vimrc
	fi
	cp $DIR/srcs/vimrc $home/.vimrc
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
	cp -r $DIR/srcs/vim $DIR/srcs/vim_tmp
	tput cup $tput_ended 0
	tput_ended=$((tput_ended+3))
	mv $DIR/srcs/vim_tmp $home/.vim
	tput cup $tput_y $tput_done
	echo '√'
fi

tput_y=$((tput_y+1))

if [[ ${values[3]} == true ]]; then
	if [[ ! -d '~/Documents/Programs/Shell' ]]; then
		mkdir -p $home/Documents/Programs/Shell
	fi
	cp -nr $DIR/srcs/shell_files/* $home/Documents/Programs/Shell/
	tput cup $tput_y $tput_done
	echo '√'
fi

tput cup $tput_ended 0

source ~/.zshrc

echo 'INSTALLATION DONE'
echo ''
echo '################################################################################'
echo ''
echo 'lookfor(name|pseudo|phone) [-r] <to_look_for>'
echo '	#search someone on the LDAP, by firstname|lastname|pseudo|phone'
echo '	#use -r options to look for with only the begin of <to_look_for>'
echo ''
echo '_git [<commit_message>]'
echo '	#git add --all && git commit -m `date` + <commit_message> && git push'
echo ''
echo 'whereami'
echo '	#give the cluster position. Ex: e2r3p4'
echo ''
echo 'save_preferences'
echo '	#save your preferences(from System Preferences) folder.'
echo ''
echo 'load_preferences'
echo '	#restore your preferences(from System Preferences) folder saved.'
echo ''
echo 'logout'
echo '	#just log you out :]'
echo ''
echo '################################################################################'
