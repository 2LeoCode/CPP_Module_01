#!/bin/bash

touch main.cpp
echo "#include <string>" >> main.cpp
echo "void memoryLeak(void);int main(void){memoryLeak();return (0);}" >> main.cpp
clang++ -Wall -Werror -Wextra main.cpp ex01.cpp -o MemoryLeak
rm -f main.cpp
