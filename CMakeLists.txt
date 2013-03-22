project(BaRoLi)
cmake_minimum_required(VERSION 2.8)

find_package(Qt4 4.8.0 REQUIRED QtCore QtGui)
include(${QT_USE_FILE})

find_library(QX_ORM QxOrm)

add_subdirectory(src)

