#!/bin/bash

# Create object files from all .c files in current directory
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create static library from all object files
ar -rc liball.a *.o

# Index static library
ranlib liball.a

