//
// Created by conta on 19/05/2023.
//

#include "shape.h"
#include <iostream>

using namespace std;

shape::shape() {
    x = 0;
    y = 0;
}

shape::shape(int valx, int valy) {
    x = valx;
    y = valy;
}

string shape::draw() {
    return "Soy una figura ";
}

int shape::getX() {
    return x;
}

int shape::getY() {
    return y;
}

void shape::setX(int valx) {
    x= valx;
}

void shape::setY(int valy) {
    y= valy;
}

shape::~shape() {
}


