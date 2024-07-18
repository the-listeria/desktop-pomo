#!/bin/bash

gcc -Wall -Wextra -Iinclude -c src/*.c
rm ./build/*
mv *.o ./build/
gcc -o app build/*.o
./app
