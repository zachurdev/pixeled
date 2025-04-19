# Pixeled Compiler

Based on Pixeled's (youtube.com/@pixeled-yt) "Creating a Compiler" series.

- `v1/alpha` Corresponds to timestamp of 0:00-19:55 in part one of the video  series. At this point, the directory contains the .asm file of a program to return an exit code, object file output by NASM (`nasm`), executable produced by GNU Linker (`ld`), and a Bash script to automatically check the program.

- `v1/bravo` Corresponds to timestamp of 19:56-27:51 in part one of the video series. This is an interim version used to check `cmake` and C++ are working on the system. Version 2 only contains a basic CMakeLists.txt file and a C++ "Hello, World!" program. There is an included Bash script to automate testing of the compiler at this point.

- `v1/charlie` Corresponds to timestamp of 27:52-38:21 in part one of the video series. The third version builds upon the CMake and C++ files from `v2` and introduces the code needed to read the contents of the Hydrogen file (`test.hy`).A step is added to the Bash script which runs the `hydro` executable on `test.hy` to return the Hydrogen file contents as a string.

- `v1/delta` Corresponds to timestamp of 38:22-57:56 in part one of the video series. File structure remains the same as `v03` with tokenization added to the `main.cpp file. With the exception of `main.cpp` all file contents remain unchanged.

- `v1/echo` Corresponds to timestamp of 57:57-1:05:10 in part one of the video series. All conditions related to `v04` are the same. File structure and contents (with exception of `main.cpp` are unchanged. Introduces conversion of tokens to Assembly code, but lacks the functionality to output the Assembly code to a file of its own.

- `v1/foxtrot` Corresponds to timestamp of 1:05:11-1:11:02 in part one of the video series. At this step, pre-existing file structure is unchanged. Additional files are added, included `out.asm`, `out.o`, and the `out` executable. The `test.sh` script receives an update to continue providing a complete and automated test of the compiler at this point in development. Functionality to output Assembly code to a file of its own is added for this version.

- `v2/golf` Corresponds to timestamp of 0:00-28:54 in part two of the video series. Refactoring takes place in this version. By now, the tokenization has been abstracted to a `.hpp` header file. Several processes related to tokenization have been improved. Corresponding code within `main.cpp` has been reduced. The `test.sh` script has been improved with absolute paths which allow it to be from anywhere on the local host. All other file contents and structure have remain the same.

