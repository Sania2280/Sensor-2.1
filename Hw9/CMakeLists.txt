cmake_minimum_required(VERSION 3.16)

project(Hw9 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Hw9
  main.cpp
  sensor.h sensor.cpp
  sensormetric.h sensormetric.cpp
  analyser.h analyser.cpp
  loger.h loger.cpp
  config.json
  connect_json.h connect_json.cpp


)
target_link_libraries(Hw9 Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS Hw9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
