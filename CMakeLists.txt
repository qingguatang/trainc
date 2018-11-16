cmake_minimum_required(VERSION 3.12)
project(trainc C)

set(CMAKE_C_STANDARD 11)

add_executable(main c3/main.c)
add_executable(color c3/color.c)
add_executable(color256 c3/color256.c)
add_executable(butterfly c3/butterfly.c)
add_executable(typing c3/typing.c)

add_executable(animals c4/animals.c)
add_executable(lottery c4/lottery.c)
add_executable(time c4/time.c)
add_executable(pointer c4/pointer.c)

