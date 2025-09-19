cmake_minimum_required(VERSION 3.26)
project(CPP_10Hour_Course)
set(CMAKE_CXX_STANDARD 17)

# Find every subfolder that contains a main.cpp
file(GLOB children RELATIVE ${CMAKE_SOURCE_DIR} */main.cpp)

foreach(main_file IN LISTS children)
  get_filename_component(dir "${main_file}" DIRECTORY)
  string(REGEX REPLACE "[^A-Za-z0-9_]" "_" target "${dir}")
  add_executable(${target} "${dir}/main.cpp"
          "Using Variables With COUT/main.cpp"
          "User Input With CIN/main.cpp"
          "Conventions and Style Guides/main.cpp")
endforeach()
