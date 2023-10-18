#!/bin/bash


read -p "Enter the limit: " n

count=0
sum=0
number=2


while [ $count -le $n ];
do 
	flag=1
	for((i = 2; i <= number / 2 ; i++));
	do
		if [ $((number%i)) -eq 0 ]; then
			flag=0
			break
		fi
	done
	if [ $flag -eq 1 ]; then
		sum=$((sum+number))
		count=$((count+1))

	fi

	number=$((number+1))
done

echo "$sum"







