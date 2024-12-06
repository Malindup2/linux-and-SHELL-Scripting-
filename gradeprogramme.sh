#!/bin/bash
echo "enter the marks:"
read mark

if [ $mark -ge 60 ] ;then
	echo "A"
elif [ $mark -ge 50 ] ;then
	echo "B" 
elif [ $mark -ge 40 ] ;then
	echo "C"
else
	echo "fail"
fi
