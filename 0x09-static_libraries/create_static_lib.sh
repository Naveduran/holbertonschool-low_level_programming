#!/bin/bash
for i in $(ls *.c); do
    gcc -c $i -o "${i:0:-1}o"
done
ar rc liball.a *.o
