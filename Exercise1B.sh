#!/bin/bash
if [ $# -ge 2 ]
then
    echo "Valid Usage"
else
    echo "Invalid Usage"
    exit 1
fi

echo "Script name is $0"
echo "Number of positional parameters is $#"
echo "First positional parameter is $1"
echo "Second positional parameter is $2"

maximum=$1

for num in "$@"
do
    if [ $maximum -lt $num ]
    then
        maximum=$num
    fi
done

echo "The maximum number in the list of positional parameters is $maximum"
