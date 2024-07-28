#!/bin/bash

while true; do
    clear
    g++ c.cpp
    ./a.out < input_c

    sleep 3s
    nvim c.cpp
done
