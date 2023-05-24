cmake_minimum_required(VERSION 3.14)

project(logger_test LANGUAGES CXX)
set(PROJECT_NAME logger_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-std=c++17 -pthread -g -Wall -O0 -fstack-protector -fstack-protector-all)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../logger)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)


add_executable(${PROJECT_NAME}
	${DICOM_DIR_SRC}
    ../logger/rslogger_declare.h
    ../logger/rslogging.h
    ../logger/rslog.h
	main.cpp
)

target_link_libraries(${PROJECT_NAME} rslogger)
install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
