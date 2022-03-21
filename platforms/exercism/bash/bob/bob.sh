#!/usr/bin/env bash

main() {
	msg=${1:-}
	#echo $msg
	i=$((${#msg} - 1))
	lastchar=${msg:$i:1}

	# checking empty message
	if [[ -z $msg ]]; then
		echo "Fine. Be that way!"
		exit
	fi

	# checking all-caps
	if [[ "$msg" =~ [a-zA-Z] && "${msg^^}" == "$@" ]]; then
		[[ $lastchar == '?' ]] && echo "Calm down, I know what I'm doing!" || echo "Whoa, chill out!"	
		exit
	fi

	# checking questions
	if [[ $lastchar == '?' ]]; then
		echo "Sure."
		exit
	fi

	#other cases
	echo "Whatever."
}


main $1
