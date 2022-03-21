#!/usr/bin/env bash

main() {
	for x in {A..Z}
	do
		if [[ "$1" != *"$x"* ]]; then
			echo "false"
			exit 0
		fi
	done
	echo "true"

}

main "${1^^}"
