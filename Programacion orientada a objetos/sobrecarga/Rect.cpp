//
// Created by conta on 09/06/2023.
//

#include "Rect.h"
#include <iostream>

Rect::Rect() {
    x=0;
    y=0;
}

Rect::Rect(int Valx, int Valy) {
    x=Valx;
    y=Valy;
}

int Rect::getX() {
    return x;
}

int Rect::getY() {
    return y;
}

Rect::~Rect() {
}


