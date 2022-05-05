cmake_minimum_required( VERSION 3.22 )
project( SDL2Test )

set( CMAKE_CXX_STANDARD 14 )

include_directories( ${PROJECT_SOURCE_DIR}/SDL2/include )
link_directories( ${PROJECT_SOURCE_DIR}/SDL2/lib )

add_executable( ${PROJECT_NAME} src/main.cpp )
target_link_libraries( ${PROJECT_NAME} mingw32 SDL2main SDL2 )
