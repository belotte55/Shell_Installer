# Shell_Installer

## INSTALL
To use it:
```sh
git clone https://github.com/belotte55/Shell_Installer.git
cd Shell_Installeur
# on Linux:
bash install.sh
# on MacOS:
./install.sh
```
The installer can create a .zshrc file, which works with Z Shell (zsh).  
To install it:
```
chsh -s $(which zsh)
```
## COMMANDS
Search someone on the LDAP, by firstname|lastname|pseudo|phone  
Use -r options to look for with only the begin of <to_look_for>
```sh
lookfor(name|pseudo|phone) [-r] <to_look_for>
```
Alias for `git add --all && git commit -m `date` + <commit_message> && git push`
```sh
_git [<commit_message>]
```
Gives the cluster position. Ex: e2r3p4
```sh
whereami
```
Saves your preferences folder.
```
save_preferences
```
Restores your preferences folder.
```
load_preferences
```
Just logs you out ;] Can be combined with `sleep`: `sleep 60; logout` -> logout you after 60s.
```
logout
```
Generates a Makefile. Set an argument to generate a Makefile to compile a library.  
Needs `./srcs` and `./includes` directories.
You must re-run it if you add new files in `./srcs`
```
Makefile_Creator [<library_name>]
```
## UPDATES
#### 17.07.23
- Added compatibility for Linux
- Updated Makefile_Creator -> new design
- Updated iTerms preferences file -> UI improvements
#### 15.09.16
- Interface updated.
