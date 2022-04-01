cmake_minimum_required(VERSION 3.14)

project(PBrowser LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_library(PBrowser SHARED
  PBrowser_global.h

  propertybrowser/qtvariantproperty.h
  propertybrowser/qtbuttonpropertybrowser.cpp
  propertybrowser/qtgroupboxpropertybrowser.cpp
  propertybrowser/qtgroupboxpropertybrowser.h
  propertybrowser/qteditorfactory.cpp
  propertybrowser/qteditorfactory.h
  propertybrowser/qtpropertybrowserutils.cpp
  propertybrowser/qtvariantproperty.cpp
  propertybrowser/qtpropertymanager.cpp
  propertybrowser/qtpropertymanager.h
  propertybrowser/qtpropertybrowserutils_p.h
  propertybrowser/qtpropertybrowser.qrc
  propertybrowser/qttreepropertybrowser.h
  propertybrowser/qttreepropertybrowser.cpp
  propertybrowser/qtpropertybrowser.h
  propertybrowser/qtbuttonpropertybrowser.h
  propertybrowser/qtpropertybrowser.cpp
  objectpropertybrowser/objectpropertybrowser.cpp
  objectpropertybrowser/objectpropertybrowser.h
)

target_include_directories(PBrowser PRIVATE propertybrowser/ objectpropertybrowser/)

target_link_libraries(PBrowser PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(PBrowser PRIVATE PBROWSER_LIBRARY)
