cmake_minimum_required(VERSION 3.5)  # Обновлено до 3.5 для совместимости

include("cmake/HunterGate.cmake") 
HunterGate( 
    URL "https://github.com/cpp-pm/hunter/archive/v0.25.290.tar.gz" 
    SHA1 "a1e0c5d17d6d38e53e42151b5c0b6d7c3e3f3a3b" 
)

project(print VERSION 1.0.0 LANGUAGES CXX)

# Версия уже задана в project(), можно упростить
set(PRINT_VERSION ${PROJECT_VERSION})
set(PRINT_VERSION_STRING "v${PROJECT_VERSION}")

hunter_add_package(GTest) 
find_package(GTest CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Лучше использовать явное указание путей
add_library(print STATIC 
    sources/print.cpp
)

# Современный способ задания include директорий
target_include_directories(print PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Примеры
add_executable(example1 examples/example1.cpp)
add_executable(example2 examples/example2.cpp)

target_link_libraries(example1 print)
target_link_libraries(example2 print)

# Демо-приложение (добавлено)
add_executable(demo demo/main.cpp)
target_link_libraries(demo print)

if(BUILD_TESTS)
  enable_testing()
  
  # Использовать file(GLOB) не рекомендуется, но для простоты оставим
  file(GLOB PRINT_TEST_SOURCES tests/*.cpp)
  
  add_executable(check ${PRINT_TEST_SOURCES})
  
  # Исправлено: правильная цель для GTest
  target_link_libraries(check print GTest::gtest_main)
  
  # Добавлены include директории для тестов
  target_include_directories(check PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
  
  add_test(NAME check COMMAND check)
endif()

# Закомментировано правильно, CPack не нужен
# include(CPackConfig.cmake)

# Установка компонентов
install(TARGETS print
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

install(TARGETS example1 example2 demo
    RUNTIME DESTINATION bin
)

install(DIRECTORY include/ DESTINATION include)
