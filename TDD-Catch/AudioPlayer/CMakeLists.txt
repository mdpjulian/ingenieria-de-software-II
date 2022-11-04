cmake_minimum_required(VERSION 3.10)

find_package(Catch2 3 REQUIRED)

project(AudioPlayer)

add_executable(AudioPlayerTDD "main.cpp")

target_link_libraries(AudioPlayerTDD PRIVATE Catch2::Catch2WithMain)

