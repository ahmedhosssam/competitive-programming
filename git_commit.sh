#!/bin/bash

read commit_message

if [ -z "$commit_message" ]; then
    echo "Commit message cannot be empty. Exiting."
    exit 1
fi

git add .
git commit -am "$commit_message"
git push origin main
