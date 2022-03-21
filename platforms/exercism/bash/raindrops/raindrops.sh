#!/usr/bin/env bash

main (){
	num=$1

	if [[ $(( $num % 3 )) -eq 0 ]]
	then
		retstring="Pling"
	fi

	if [[ $(( $num % 5 )) -eq 0 ]]
	then
		retstring+="Plang"
	fi

	if [[ $(( $num % 7 )) -eq 0 ]]
	then
		retstring+="Plong"
	fi

	echo "${retstring:-$num}"
	
}

main "$1"
