#!/usr/bin/env bash

main() {
	input="${1//-/ }"
	input="${input//\*/ }"
	input="${input//_/ }"

	words=($input)

	for word in ${words[*]}
	do
		lett=${word^}
		echo -n "${lett:0:1}"
	done	
}

main "$@"
