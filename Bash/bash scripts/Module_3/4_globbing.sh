#!/bin/bash


echo "The list of all the text files in the samplefiles directory are: "
ls -l samplefiles/*.txt

echo "The list of script files starting with 'a'"
ls -l samplefiles/[aA]*.sh


echo "The list of files starting with range a to d"
ls -l samplefiles/[a-d]*.sh



