#!/bin/bash

file=samplefiles/randomfile.sh

file1=samplefiles/anotherfile.sh

if [ -f "$file" ] && [ -x "$file" ];then
	echo "The file exists and is executable"

fi


