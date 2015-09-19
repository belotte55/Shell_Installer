# Shell_Installer

## INSTALL
To use it:
```sh
git clone https://github.com/belotte55/Shell_Installer.git
cd Shell_Installeur
./install.sh
```
The installer can create a .zshrc file, which works with Z Shell (zsh).
To install it:
```
chsh -s $(which zsh)
```
## UPDATES
#### 09.16.15
Interface updated.
## WARNING
This installer has been created for OS X. Linux's users have to modify some things:
```
on ~/.zshrc, line 2:
	fill with your pseudo: PSEUDO="<your pseudo here>"
on ~/.vim/autoload/myheader.vim, line 64:
	fill with your email: return "<your email here>"
```
