#!/bin/zsh

# doc here: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf
#		0x7000000 prefix. You can find it on the doc. Ex: "Keyboard/Keypad Page (0x07)".
#		04		  suffix. It is the Usage ID (hex).

A='0x700000004'
B='0x700000005'
C='0x700000006'
D='0x700000007'
E='0x700000008'
F='0x700000009'
G='0x70000000A'
H='0x70000000B'
I='0x70000000C'
J='0x70000000D'
K='0x70000000E'
L='0x70000000F'
M='0x700000010'
N='0x700000011'
O='0x700000012'
P='0x700000013'
Q='0x700000014'
R='0x700000015'
S='0x700000016'
T='0x700000017'
U='0x700000018'
V='0x700000019'
W='0x70000001A'
X='0x70000001B'
Y='0x70000001C'
Z='0x70000001D'

LIGHT_DOWN='0x700000047'
LIGHT_UP='0x700000048'
INSERT='0x700000049'
HOME='0x70000004A'
PAGE_UP='0x70000004B'
DEL='0x70000004C'
END='0x70000004D'
PAGE_DOWN='0x70000004E'
RIGHT='0x70000004F'
LEFT='0x700000050'
DOWN='0x700000051'
UP='0x700000052'
POWER='0x700000066'
VOLUME_UP='0x700000080'
VOLUME_DOWN='0x700000081'

NEXT_TRACK='0xC000000B5'
PREVIOUS_TRACK='0xC000000B6'
PAUSE='0xC000000CD'
CMD_LEFT='0x7000000E3'
CMD_RIGHT='0x7000000E7'
ALT_LEFT='0x7000000E2'
ALT_RIGHT='0x7000000E6'

cmds=''

add_map () {
	if [[ ! "$cmds" = '' ]]; then
		cmds=$cmds','
	fi
	cmds=$cmds'{"HIDKeyboardModifierMappingSrc":'$1',"HIDKeyboardModifierMappingDst":'$2'}'
}

remap () {
	hidutil property --set '{"UserKeyMapping":['$cmds']}'
}

# add_map <PHYSICAL KEY> <NEW FUNCTION>

add_map $PAGE_UP $POWER
add_map $INSERT $VOLUME_DOWN
add_map $HOME $VOLUME_UP
add_map $DEL $PREVIOUS_TRACK
add_map $END $PAUSE
add_map $PAGE_DOWN $NEXT_TRACK

remap
# osascript -e 'quit app "Terminal"'
killall Terminal
