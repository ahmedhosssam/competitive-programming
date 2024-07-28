#!/bin/bash

FILE=CF1988-D2-C.cpp

while true; do
    nvim $FILE
    clear
    g++ $FILE
    ./a.out < input_a

    sleep 3s
done
