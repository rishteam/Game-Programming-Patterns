cmake_minimum_required(VERSION 3.1)

project(CommandPattern)

## If you want to link SFML statically
if(MSYS)
    set(SFML_STATIC_LIBRARIES TRUE)
endif(MSYS)

# set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

set(CMAKE_CXX_STANDARD 14)

if(MSYS)
set(SFML_DIR "/mingw32/lib/cmake/SFML")
endif(MSYS)

add_executable(CommandPattern
    src/main.cpp
    #
    src/player.cpp
    src/command.cpp
)
target_include_directories(CommandPattern
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)

find_package(SFML 2.5 COMPONENTS graphics audio window REQUIRED)

if(APPLE)
    target_link_libraries(CommandPattern sfml-graphics sfml-audio)
endif(APPLE)

if(MSYS)
    target_link_libraries(CommandPattern
        sfml-graphics sfml-audio
        # For static libraries
        -static-libgcc -static-libstdc++ -lwsock32 -lws2_32
        -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive
    )
endif(MSYS)

# Copy files
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})
# file(GLOB BINARY_DEP_DLLS
#     "${CMAKE_SOURCE_DIR}/bin/*.dll"
# )
# file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
