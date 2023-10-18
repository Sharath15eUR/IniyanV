#!/bin/bash



read -p "Enter your username: " uname

if [ $uname == $USER ]; then
	echo "Hello $uname"
else
	echo "Try again!"
fi

