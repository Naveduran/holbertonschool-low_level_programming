#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
#gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
rm *.o
