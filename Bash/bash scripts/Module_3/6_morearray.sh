#!/bin/bash

declare -a names=('walter' 'jesse' 'tuco' 'gus' 'mike' 'hank' 'saul')

echo "Three elements from index 3 are: ${names[@]:2:3}"

names[2]='Debian'

echo "The changed array is: ${names[@]}"

names=("${names[@]}" "skyler")

echo "The appended array is : ${names[@]}"
