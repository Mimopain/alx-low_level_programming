#!/bin/bash
gcc -wall -wextra -werror -pedantric -c *.c
ar rc liball.a *.o
