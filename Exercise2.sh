#!/bin/bash

for string in $@
do
    echo $string
done

for string in $*
do
    echo $string
done

for string in "$@"
do
    echo $string
done

for string in "$*"
do
    echo $string
done
