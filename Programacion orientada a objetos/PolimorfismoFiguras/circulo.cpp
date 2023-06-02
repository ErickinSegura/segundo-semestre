//
// Created by conta on 19/05/2023.
//

#include "circulo.h"
#include "shape.h"
#include <iostream>
#include <cmath>

using namespace std;


circulo::circulo():shape() {
    radio = 0;
}

circulo::circulo(int valx, int valy, double valradio):shape(valx,valy) {
    radio = valradio;
}

double circulo::getRadio() {
    return radio;
}

void circulo::setRadio(double valradio) {
    radio = valradio;
}

int circulo::area() {
    return M_PI * pow(radio,2);
}

string circulo::draw() {
    return "Soy un circulo ";
}


circulo::~circulo() {
}
