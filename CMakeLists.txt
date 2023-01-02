cmake_minimum_required(VERSION 3.23)
project(vulkan_learn)
set(CMAKE_CXX_STANDARD 23)

add_executable(vulkan-engine-learn)

include_directories(vulkan-engine-learn src/include)
file(GLOB_RECURSE vulkan-engine-learn-src "*.cpp")
target_sources(vulkan-engine-learn PRIVATE ${vulkan-engine-learn-src})


find_package(PkgConfig REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm REQUIRED)
find_package(JPEG REQUIRED)
find_package(Vulkan REQUIRED)

target_include_directories(vulkan-engine-learn PRIVATE ${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} ${JPEG_INCLUDE_DIR} ${GLM_INCLUDE_DIR} ${VULKAN_INCLUDE_DIR})
target_link_libraries(vulkan-engine-learn PRIVATE glfw ${GLEW_LIBRARIES} ${JPEG_LIBRARIES} Vulkan::Vulkan)
