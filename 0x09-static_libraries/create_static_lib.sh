#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c libmy.c
ar rc liball.a libmy.o

