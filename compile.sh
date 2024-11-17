#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <letter>"
    exit 1
fi

G=$1

while true; do
    nvim "${G}.cpp"
    clear
    g++ "${G}.cpp" && ./a.out < "input"

    sleep 3s
done
