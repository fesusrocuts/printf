#!/bin/bash

cp main.c ../
cp man_3_printf ../

echo "printf_$(ls print* | wc -l).c" | awk '{print "cp printf "$0}' | sh

gcc -Wall -Werror -Wextra -pedantic ../*.c -o printf

rm ../main.c
