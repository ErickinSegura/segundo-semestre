//
// Created by conta on 09/06/2023.
//

#include "Pola.h"

Pola::Pola() {
    r=0;
    ang=0;
}

Pola::Pola(int Valr, int Valang) {
    r=Valr;
    ang=Valang;
}

int Pola::getR() {
    return r;
}

int Pola::getAng() {
    return ang;
}

Pola::~Pola() {
}

