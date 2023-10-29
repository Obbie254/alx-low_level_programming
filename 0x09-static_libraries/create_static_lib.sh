#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.o
ar -rcs liball.a *.o
