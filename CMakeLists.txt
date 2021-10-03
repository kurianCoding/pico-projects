cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)
include(pico_extras_import.cmake)
project(morse_code C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})
pico_sdk_init()
add_executable(
morse_code
morse_code.c
)
target_link_libraries(morse_code pico_stdlib)
pico_enable_stdio_usb(morse_code 1)
pico_enable_stdio_uart(morse_code 1)
pico_add_extra_outputs(morse_code)
