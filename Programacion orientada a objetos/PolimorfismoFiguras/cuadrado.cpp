//
// Created by conta on 19/05/2023.
//

#include "cuadrado.h"
#include "shape.h"

cuadrado::cuadrado() {
    lado = 0;
}

cuadrado::cuadrado(int x, int y, int vlado) : shape(x, y) {
    lado = vlado;
}

int cuadrado::getLado() {
    return lado;
}

void cuadrado::setLado(int lado) {
    lado = lado;
}

int cuadrado::area() {
    return lado*lado;
}

string cuadrado::draw() {
    return "Soy un cuadrado ";
}

cuadrado::~cuadrado() {

}
