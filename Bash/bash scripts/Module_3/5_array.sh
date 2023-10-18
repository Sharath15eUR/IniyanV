#!/bin/bash

declare -a names=('walter' 'jesse' 'mike' 'gus' 'hank' 'saul' 'tuco')

echo "The length of the array is ${#names[@]}"

echo "All the elements in the array are: ${names[@]}"

echo "The fifth element is the array is: ${names[4]}"
