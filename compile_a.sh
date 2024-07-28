#!/bin/bash

while true; do
    clear
    g++ a.cpp
    ./a.out < input_a

    sleep 3s
    nvim a.cpp
done
