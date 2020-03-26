#!/bin/bash

#//This script is to compile c file on vim and run it from vim command mode

output=$1\.out
init_comment="   Compiling <$1>   "
init_comment_size=${#init_comment}

echo " "
#echo "++++++++++++++++++++"
python -c "print('+' * $init_comment_size)"
echo "$init_comment"
python -c "print('+' * $init_comment_size)"
echo " "

gcc -o $output  $1
if [ $? -ne 0 ]; then
	echo -e "\n############################"
	echo -e "Error Occured During Compile"
	echo -e "############################"
	exit 1
fi
now=$(date +'%T')

echo -e "\n\n<$output> is Running at $now\n"
if [[ $output == /* ]]; then  #working on absolute path too
	$output
else
	./$output

fi
echo -e "\n<$output> is Terminated $now\n"

