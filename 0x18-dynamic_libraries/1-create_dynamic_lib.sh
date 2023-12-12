#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o

rm *.o
