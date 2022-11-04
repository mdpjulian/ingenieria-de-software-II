#! /bin/sh

git clone https://github.com/catchorg/Catch2.git
cd ./Catch2
mkdir build
cd ./build
cmake ..
cmake --build .