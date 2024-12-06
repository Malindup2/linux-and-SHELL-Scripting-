#!/bin/bash
if [ $# -ne 3 ]; then
    echo "Error: provide exactly three numbers as arguments"
    exit 1
fi

# Assigning the command-line arguments to variables
num1=$1
num2=$2
num3=$3

# Finding the largest number using conditional statements
if [ $num1 -ge $num2 ] && [ $num1 -ge $num3 ]; then
    echo "biggest is: $num1"
elif [ $num2 -ge $num1 ] && [ $num2 -ge $num3 ]; then
    echo "biggest is: $num2"
else
    echo "biggest is: $num3"
fi

