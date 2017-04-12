cmake_minimum_required(VERSION 3.7)
project(SFMLPong)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp addBallPowerup.cpp ball.cpp game.cpp longPaddlePowerup.cpp paddle.cpp powerup.cpp ChangeBallSpeedPowerup.cpp ChangeBallSpeedPowerup.h)
add_executable(SFMLPong ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.3.2 COMPONENTS system window graphics network audio REQUIRED)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(SFMLPong ${SFML_LIBRARIES})
    message("SFML found!")
else()
    message("SFML not found!")
endif()

message("Graphics lib: ${SFML_GRAPHICS_LIBRARY_DEBUG}")

