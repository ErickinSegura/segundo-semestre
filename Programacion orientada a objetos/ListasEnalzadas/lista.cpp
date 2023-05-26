//
// Created by conta on 26/05/2023.
//
#include "nodo.h"
#include "lista.h"
#include <iostream>

using namespace std;

lista::lista() {
    cabeza = NULL;
}

void lista::insertaIni(int dato) {
    nodo *nuevo = new(nodo);
    nuevo->setDato(dato);
    nuevo->setSiguiente(cabeza);
    cabeza = nuevo;

}

void lista::insertaFin(int dato) {

}

void lista::recorre() {
    nodo *aux = cabeza;
    while (aux != NULL) {
        cout << aux->getDato() << endl;
        aux = aux->getSiguiente();
    }
}

void lista::elimina(int dato) {

}

void lista::insertaOrd(int dato) {

}



lista::~lista() {
    nodo *aux;
    while (cabeza != NULL) {
        aux = cabeza;
        cabeza = cabeza->getSiguiente();
        free(aux);
    }
}