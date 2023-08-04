#!/bin/bash
gcc -Wall -Pedantic -Werror -wextra -c *.c
ar -rc liballa.a *.o
ranlib liballa.a
