cmake_minimum_required(VERSION 3.29)
project(SDL_project)

set(CMAKE_CXX_STANDARD 20)
set(SDL2_DIR /opt/homebrew/opt/sdl2)
set(SDL2_IMAGE_DIR /opt/homebrew/opt/sdl2_image)


# Tìm các gói SDL2 và SDL2_image
find_package(SDL2 REQUIRED PATHS ${SDL2_DIR})
find_package(SDL2_image REQUIRED PATHS ${SDL2_IMAGE_DIR})
include_directories(/opt/homebrew/opt/sdl2/include/SDL2)
include_directories(/opt/homebrew/opt/sdl2_image/include/SDL2)

add_executable(SDL_project main.cpp)

# Liên kết thư viện SDL2 và SDL2_image
target_link_libraries(SDL_project ${SDL2_LIBRARIES} /opt/homebrew/lib/libSDL2_image.dylib)