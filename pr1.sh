i#!/bin/bash
while true
do
	echo"Menu:"
	echo"[1] show todays"
	echo"[2] show files in current directory"
	echo"[3] show calender"
	echo"[4] start editor to write letters"
	echo"[5] exit/stop"

read -p "enter your choice"  choice
	case $choice in
	1) date;;
	2)ls;;
	3)cal;;
	4)nano;;
	5)echo"Exiting..."; exit 0;;
	*) echo "invalid option,please try again";;
	esac
done
