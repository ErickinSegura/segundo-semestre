//
// Created by conta on 19/05/2023.
//

#include "poligono.h"
#include "shape.h"

poligono::poligono():shape() {
    base = 0;
    nlado = 0;
    apotema = 0;
}

poligono::poligono(int x, int y, int vnlado, int vbase, int vapotema): shape(x,y) {
    nlado = vnlado;
    base = vbase;
    apotema = vapotema;
}

int poligono::getBase() {
    return base;
}

int poligono::getNlado() {
    return nlado;
}

int poligono::getApotema() {
    return apotema;
}

void poligono::setBase(int vbase) {
    base = vbase;
}

void poligono::setNlado(int vnlado) {
    nlado = vnlado;
}

void poligono::setApotema(int vapotema) {
    apotema = vapotema;
}


double poligono::area() {
    return ((nlado*base)*apotema)/2;
}

poligono::~poligono() {
}
