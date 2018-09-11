#!/bin/bash

rm -v c/a.out
git add *
git commit -am "$*"
git push
