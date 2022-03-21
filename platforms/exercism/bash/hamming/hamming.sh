#!/usr/bin/env bash

usage() {
	echo "Usage: hamming.sh <string1> <string2>"
	exit 1
}

unequalargs() {
       echo "left and right strands must be of equal length"
       exit 1
}

main(){
	args=("$@")
	num=0

	if [[ ${#args[*]} -ne 2 ]]; then
		usage
	fi

	if [[ ${#1} -ne ${#2} ]]; then
		unequalargs
	fi
		
	len=${#1}		

	for i in $( seq 0 $(( $len - 1 )) ) 
	do
		if [[ "${1:$i:1}" != "${2:$i:1}" ]]; then
			num=$(( num + 1 ))
		fi
	done

	echo $num
}

main "$@"
