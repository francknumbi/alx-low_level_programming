#!/bin/bash
CFILE=$1
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -E $CFILE -o c

