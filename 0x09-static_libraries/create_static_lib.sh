#!/bin/bash
gcc -Wall -Pedantic -Werror -Wextra -c *.c
ar -rc liballa.a *.o
ranlib liballa.a
