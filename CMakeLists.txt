cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)

project(GifCreator)

file(GLOB GifCreatorSources ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
						${CMAKE_CURRENT_SOURCE_DIR}/GifCreatorUtils.hpp)

add_executable(GifCreator ${GifCreatorSources})

target_include_directories(GifCreator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gif-h)
target_include_directories(GifCreator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/JsonParser2/Sources)

file(GLOB JsonParser2Lib ${CMAKE_CURRENT_SOURCE_DIR}/JsonParser2/Build/libJsonParser.a)

target_link_libraries(GifCreator ${JsonParser2Lib})

add_definitions(-DPATH_TO_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")
