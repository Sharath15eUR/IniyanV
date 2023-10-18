#!/bin/bash

echo "The present working directory is $PWD"
echo "The current system owner is $LOGNAME"


read -t 10 -p "Enter your username: " uname

if [ -z "$uname" ]; then
	exit
else
	echo "Hello, $uname!"
fi

