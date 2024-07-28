#!/bin/bash

while true; do
    clear
    g++ b.cpp
    ./a.out < input_b

    sleep 3s
    nvim b.cpp
done
