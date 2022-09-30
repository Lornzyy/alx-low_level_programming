#!/bin/bash
gcc -Wall -Werror -Wextra -c *c
ar rsc liball.a *.o

