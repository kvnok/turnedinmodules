#!/bin/bash

if [ $# -eq 1 ]; then
	rm *.txt.re*
	exit 0
fi

cd ../
make re
./ex04 nothing 123 test
./ex04 test/0.txt blab 123
./ex04 test/1.txt ok okokok
./ex04 test/2.txt 4 ""
./ex04 test/3.txt "some random" okidoki

valgrind --leak-check=full ./ex04 test/1.txt ok	yep