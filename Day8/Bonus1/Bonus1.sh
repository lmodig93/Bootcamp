#!/usr/bin/env bash

wget -O output.txt $1

sed -i 's/Volvo/The Best Company Ever/g' output.txt