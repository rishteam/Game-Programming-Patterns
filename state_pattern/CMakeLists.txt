cmake_minimum_required(VERSION 3.10)

project(example
    VERSION 0.0.1
    DESCRIPTION "Static library example"
    LANGUAGES CXX
)

# Add static library
add_library(mylib STATIC
    src/player.cpp
	src/shootState.cpp
	src/standState.cpp
)
target_include_directories(mylib
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# Add the executable
add_executable(example
    src/main.cpp
)
target_include_directories(example
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)

if(APPLE)
    target_link_libraries(example
        mylib
    )
endif(APPLE)

if(MSYS)
    target_link_libraries(example
        mylib
        # For static libraries
        -static-libgcc -static-libstdc++ -lwsock32 -lws2_32
        -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive
    )
endif(MSYS)

if(MSVC)
    target_link_libraries(example
        mylib
    )
endif(MSVC)