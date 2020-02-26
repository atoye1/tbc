#!/bin/bash

#//This script is to compile c file on vim and run it from vim command mode

gcc -o result.out $1
if [ $? -ne 0 ]; then
	echo -e "#########################\n"
	echo -e "Error Occured During Compile\n"
	echo -e "#########################"
	exit 1
fi
now=$(date +'%T')

echo -e "\n\n****************** $1  is being Executed at $now   *********************\n"
./result.out
echo -e "\n\n####################  File Execution is Completed  #########################"

