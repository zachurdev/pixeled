#!/bin/bash

mkdir build
cmake -S . -B build/
cmake --build build/
./build/hydro ./test.hy
rm -r build
