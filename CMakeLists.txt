cmake_minimum_required(VERSION 3.5)

project(Http_server)

# set the path to the httplib library
set(HTTPLIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/lib/cpp-httplib)

# add the httplib library as a subdirectory
add_subdirectory(${HTTPLIB_PATH})

# add the main.cpp file as an executable
add_executable(${PROJECT_NAME} main.cpp)

# Include directories for main.cpp executable
target_include_directories(${PROJECT_NAME} PUBLIC ${HTTPLIB_PATH})

# link the httplib library to the main.cpp executable
target_link_libraries(${PROJECT_NAME} PUBLIC httplib)

