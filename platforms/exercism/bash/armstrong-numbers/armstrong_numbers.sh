#!/usr/bin/env bash

main(){
	len=${#1}

	for x in $( seq 0 $(( len - 1)) )
	do
		digit=${1:$x:1}
		sum=$(( sum + digit ** len ))
	done
	
	[ $1 == $sum ]  && echo "true" || echo "false"	
}

main "$1"
