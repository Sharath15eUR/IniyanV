#!/bin/bash

read -p "Enter a number: " n

if [ -z $n ]; then 
	echo "Empty input"
else 
	if [ $n -gt 3 ]; then
		echo "Greater than 3"
	elif [ $n -eq 3 ]; then
		echo "Equal to 3"
	else 
		echo "Lesser than 3"
	fi
fi

