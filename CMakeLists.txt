cmake_minimum_required(VERSION 3.13)
project(PROJEKT)

set(CMAKE_CXX_STANDARD 14)


set(SFML_INCLUDE_DIR "/home/rewieer/Libraries/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/rewieer/Libraries/SFML-2.5.1/lib")
set(SFML_DIR "/home/rewieer/Libraries/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(SFMLApp main.cpp cmake-build-debug/Map/static_blocks.h cmake-build-debug/Map/wall.h map.h cmake-build-debug/Map/Void.h cmake-build-debug/Map/static_blocks.cpp map.cpp Player.cpp Player.h Sprite.cpp Sprite.h Ghost.cpp Ghost.h cmake-build-debug/Map/Start.cpp cmake-build-debug/Map/Start.h Graphic.h cmake-build-debug/Map/Void.cpp cmake-build-debug/Map/wall.cpp cmake-build-debug/Map/Way.cpp cmake-build-debug/Map/Way.h cmake-build-debug/Map/Corners.cpp cmake-build-debug/Map/Corners.h cmake-build-debug/Map/wallSpikes.cpp cmake-build-debug/Map/wallSpikes.h MovingGhost.cpp MovingGhost.h cmake-build-debug/Map/Meta.cpp cmake-build-debug/Map/Meta.h Menu.cpp Menu.h cmake-build-debug/Map/Lock.cpp cmake-build-debug/Map/Lock.h keys.cpp keys.h EXception.h Play.cpp Play.h Switch.cpp Switch.h Load.cpp Load.h Maps.cpp Maps.h cmake-build-debug/Map/Portal.cpp cmake-build-debug/Map/Portal.h Graphic.cpp)
target_link_libraries (SFMLApp sfml-graphics sfml-window sfml-system)
