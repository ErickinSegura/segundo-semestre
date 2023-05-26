cmake_minimum_required(VERSION 3.23)
project(paqueteria)

set(CMAKE_CXX_STANDARD 14)

add_executable(paqueteria main.cpp envio.cpp envio.h paquete.cpp paquete.h menu.cpp menu.h persona.cpp persona.h sobre.cpp sobre.h)
