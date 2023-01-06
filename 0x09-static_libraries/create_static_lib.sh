#!/bin/bash
gcc -o *.c
ar rc liball.a *.c
ranlib liball.a
