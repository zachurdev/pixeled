#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"
HY_EXE="$BUILD_DIR/hydro"
HY_FILE="$SCRIPT_DIR/example.hy"
OUT_FILE="$SCRIPT_DIR/out"

mkdir "$BUILD_DIR"
cmake -S "$SCRIPT_DIR" -B "$BUILD_DIR"
cmake --build "$BUILD_DIR"
"$HY_EXE" "$HY_FILE"
"$OUT_FILE"
echo $?
rm -r "$BUILD_DIR"
