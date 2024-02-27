cmake_minimum_required(VERSION 3.5)

project(Http_server)

set(HTTPLIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/include/cpp-httplib)

add_subdirectory(${HTTPLIB_PATH})

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${HTTPLIB_PATH})

target_link_libraries(${PROJECT_NAME} PUBLIC httplib)