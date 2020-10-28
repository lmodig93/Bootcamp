#!/usr/bin/env bash

git clone https://github.com/lmodig93/Bootcamp.git

cd Bootcamp/Day7/Assignment1

make

export LD_LIBRARY_PATH=.

./main