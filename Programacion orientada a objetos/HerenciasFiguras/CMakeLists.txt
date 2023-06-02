cmake_minimum_required(VERSION 3.23)
project(herencias)

set(CMAKE_CXX_STANDARD 14)

add_executable(herencias main.cpp shape.cpp shape.h circulo.cpp circulo.h triangulo.cpp triangulo.h cuadrado.cpp cuadrado.h poligono.cpp poligono.h)
