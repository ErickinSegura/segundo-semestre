//
// Created by conta on 19/05/2023.
//

#include "triangulo.h"
#include "shape.h"
#include <iostream>

using namespace std;

triangulo::triangulo():shape() {
    base = 0;
    altura = 0;
}

triangulo::triangulo(int x, int y, int vbase, int valtura): shape(x,y) {
    base = vbase;
    altura = valtura;
}

int triangulo::getBase() {
    return base;
}

int triangulo::getAltura() {
    return altura;
}

void triangulo::setBase(int base) {
    base = base;
}

void triangulo::setAltura(int altura) {
    altura = altura;
}

int triangulo::area() {
    return (base*altura)/2;
}

string triangulo::draw() {
    return "Soy un triangulo ";
}


triangulo::~triangulo() {

}




