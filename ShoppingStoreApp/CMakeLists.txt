cmake_minimum_required(VERSION 3.5)

project(ShoppingStoreApp VERSION 1.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/component/UI)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Sql REQUIRED)

file(GLOB UI_SOURCES ${CMAKE_SOURCE_DIR}/component/UI/*.ui)
file(GLOB QRC_SOURCES ${CMAKE_SOURCE_DIR}/component/UI/*.qrc)
file(GLOB COMPONENT_SOURCES ${CMAKE_SOURCE_DIR}/component/*.h ${CMAKE_SOURCE_DIR}/component/*.cpp)

# include_directories 的主要作用是方便地为项目源文件指定头文件的搜索路径
# 从而能正确找到所需的头文件进行编译。
include_directories(${CMAKE_SOURCE_DIR}/component)

set(PROJECT_SOURCES 
	main.cpp
	${UI_SOURCES}
	${QRC_SOURCES}
	${COMPONENT_SOURCES}
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets Qt6::Sql)
