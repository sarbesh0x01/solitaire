cmake_minimum_required(VERSION 3.11)

# Project name and language (C++ this time)
project(solitaire CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add raylib subdirectory (assuming raylib is cloned in project root)
add_subdirectory(raylib)


include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/src)

# Create your executable (using .cpp files)
add_executable(${PROJECT_NAME} #src/main.cpp
  src/game.cpp
	src/cards.cpp
#  src/solitaire.cpp
   
)

# Link raylib to your executable
target_link_libraries(${PROJECT_NAME} raylib)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
