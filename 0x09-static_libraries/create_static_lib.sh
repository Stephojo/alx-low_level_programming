#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c -o 
ar rcs liball.a *.o
