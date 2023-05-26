//
// Created by conta on 26/05/2023.
//

#include "nodo.h"
#include <iostream>

nodo::nodo(){
    dato= 0;
    siguiente = NULL;
}

int nodo::getDato() const {
    return dato;
}

void nodo::setDato(int dato) {
    this->dato = dato;
}

nodo *nodo::getSiguiente() {
    return siguiente;
}

void nodo::setSiguiente(nodo *siguiente) {
    this->siguiente = siguiente;
}

nodo::~nodo() {

}

