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
    nodo *nuevo = new(nodo);

    nuevo->setDato(dato);

    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        nodo *aux = cabeza;
        while (aux->getSiguiente() != NULL) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }

}

void lista::recorre() {
    nodo *aux = cabeza;
    while (aux != NULL) {
        cout << aux->getDato() << endl;
        aux = aux->getSiguiente();
    }
}

void lista::elimina() {
    nodo *aux = cabeza;
    nodo *aux2 = aux->getSiguiente();
    int valDuda;
    cout<<"Que valor quieres eliminar: ";
    cin>>valDuda;
    while (aux != NULL) {
        if (aux->getDato() == valDuda) {
            aux2->setSiguiente(aux->getSiguiente());
            free(aux);
            aux = aux2->getSiguiente();
        } else {
            aux2 = aux;
            aux = aux->getSiguiente();
        }
    }


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