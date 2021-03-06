cmake_minimum_required(VERSION 3.10)

add_subdirectory(deps/vfs)

project(example
    VERSION 0.0.1
    DESCRIPTION "Static library example"
    LANGUAGES CXX
)
if(MSYS)
    set(SFML_STATIC_LIBRARIES TRUE)
endif(MSYS)

set(CMAKE_CXX_STANDARD 17)

if(MSYS)
    set(SFML_DIR "/mingw32/lib/cmake/SFML")
endif(MSYS)

# Add static library
add_library(mylib STATIC
    src/entity.cpp
    # Player
    src/player/player.cpp
	src/player/shootState.cpp
    src/player/standState.cpp
    src/player/playerState.cpp
    src/player/walk.cpp
    # Bullet
    src/bullet/bullet.cpp
    src/bullet/bulletState.cpp
    src/bullet/generateState.cpp
    src/bullet/flyingState.cpp
    #
    src/keyboard.cpp
    src/Audio.cpp
    src/observer.cpp
    src/subject.cpp
    src/game.cpp
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
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

target_link_libraries(mylib
    sfml-system sfml-window sfml-graphics sfml-network sfml-audio
    vfs::vfs
)

target_link_libraries(example
    sfml-system sfml-window sfml-graphics sfml-network sfml-audio
    vfs::vfs
)

file(COPY ${CMAKE_SOURCE_DIR}/data DESTINATION ${CMAKE_BINARY_DIR})
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