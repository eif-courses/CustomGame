cmake_minimum_required(VERSION 3.17)
project(CustomGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(CustomGame main.cpp Item.cpp Item.h Stat.cpp Stat.h Inventory.cpp Inventory.h Shop.cpp Shop.h Player.cpp Player.h Treasure.cpp Treasure.h Score.cpp Score.h Achievment.cpp Achievment.h Expierence.cpp Expierence.h HUD.cpp HUD.h)