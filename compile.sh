#9999999999999999999999999999999999!/bin/bash

#//This script is to compile c file on vim and run it from vim command mode

output=$1\.out
echo -e "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n[Compiling <$1>] \n"

gcc -o $output  $1
if [ $? -ne 0 ]; then
	echo -e "#########################\n"
	echo -e "Error Occured During Compile\n"
	echo -e "#########################"
	exit 1
fi
now=$(date +'%T')

echo -e "\n\n<$output> is Running at $now\n"
./$output
echo -e "\n<$output> is terminated $now\n"

