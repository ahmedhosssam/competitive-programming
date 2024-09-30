#!/bin/bash

git add .
git commit -am "$(date +%s)"
git push origin main
