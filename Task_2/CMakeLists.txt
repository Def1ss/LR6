cmake_minimum_required(VERSION 3.10)
project(Task_2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем флаги компиляции и линковки для AddressSanitizer
add_compile_options(
    $<$<CONFIG:AddressSanitizer>:-fsanitize=address>
    $<$<CONFIG:AddressSanitizer>:-fno-omit-frame-pointer>
    $<$<CONFIG:AddressSanitizer>:-g>
)
add_link_options(
    $<$<CONFIG:AddressSanitizer>:-fsanitize=address>
)

# Добавляем флаги компиляции и линковки для ThreadSanitizer
add_compile_options(
    $<$<CONFIG:ThreadSanitizer>:-fsanitize=thread>
    $<$<CONFIG:ThreadSanitizer>:-fno-omit-frame-pointer>
    $<$<CONFIG:ThreadSanitizer>:-g>
)
add_link_options(
    $<$<CONFIG:ThreadSanitizer>:-fsanitize=thread>
)

# Добавляем исполняемый файл
add_executable(MyExecutable Task_2.cpp)

# Добавляем целевые задания для санитайзеров
add_executable(AddressSanitizedExecutable Task_2.cpp)
target_compile_options(AddressSanitizedExecutable PRIVATE -fsanitize=address -fno-omit-frame-pointer -g)
target_link_options(AddressSanitizedExecutable PRIVATE -fsanitize=address)

add_executable(ThreadSanitizedExecutable Task_2.cpp)
target_compile_options(ThreadSanitizedExecutable PRIVATE -fsanitize=thread -fno-omit-frame-pointer -g)
target_link_options(ThreadSanitizedExecutable PRIVATE -fsanitize=thread)

