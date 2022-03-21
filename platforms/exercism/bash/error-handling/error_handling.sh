#!/usr/bin/env bash

main(){
	args=("${@}")
	if [[ ${#args[@]} -ne 1 ]]
	then
		echo "Usage: error_handling.sh <person>"
		exit 1
	fi

	echo "Hello, ${args}"
}

main "${@}"
