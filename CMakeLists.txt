cmake_minimum_required(VERSION 3.16)

project(MinecraftLauncher VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

qt6_add_resources(QT_RESOURCES branding/branding.qrc)

include_directories(
    launcher/include
    buildconfig
)

file(GLOB_RECURSE LAUNCHER_SOURCES
    launcher/src/*.cpp
    launcher/include/*.hpp
    launcher/*.cpp
)

add_executable(${PROJECT_NAME}
    ${LAUNCHER_SOURCES}
    ${QT_RESOURCES}
)

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)