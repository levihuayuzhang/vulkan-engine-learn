cmake_minimum_required(VERSION 3.23)
project(vulkan_learn)
set(CMAKE_CXX_STANDARD 23)

add_executable(vulkan_learn)
target_sources(vulkan_learn PRIVATE src/main.cpp)

find_package(PkgConfig REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm REQUIRED)
find_package(JPEG REQUIRED)
find_package(Vulkan REQUIRED)

target_include_directories(vulkan_learn PRIVATE ${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} ${JPEG_INCLUDE_DIR} ${GLM_INCLUDE_DIR} ${VULKAN_INCLUDE_DIR})
target_link_libraries(vulkan_learn PRIVATE glfw GLEW::GLEW ${JPEG_LIBRARIES} Vulkan::Vulkan)
