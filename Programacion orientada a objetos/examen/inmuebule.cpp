//
// Created by conta on 13/06/2023.
//

#include "inmuebule.h"
#include <string>
#include <iostream>

inmuebule::inmuebule() {
    frente = 0;
    fondo = 0;
    valorCatastral = 0;
    ubicacion = "";
}

inmuebule::inmuebule(int frente, int fondo, int valorCatastral, std::string ubicacion) {
    this->frente = frente;
    this->fondo = fondo;
    this->valorCatastral = valorCatastral;
    this->ubicacion = ubicacion;
}

int inmuebule::getFrente() {
    return frente;
}

void inmuebule::setFrente(int frente) {
    this->frente = frente;
}

int inmuebule::getFondo() {
    return fondo;
}

void inmuebule::setFondo(int fondo) {
    this->fondo = fondo;
}

int inmuebule::getValorCatastral() {
    return valorCatastral;
}

void inmuebule::setValorCatastral(int valorCatastral) {
    this->valorCatastral = valorCatastral;
}



std::string inmuebule::getUbicacion() {
    return ubicacion;
}

void inmuebule::setUbicacion(std::string ubicacion) {
    this->ubicacion = ubicacion;
}

int inmuebule::precioVenta(float incremento) {
    return getValorCatastral()*incremento/(incremento+1);
}

void inmuebule::mostrarDatos() {
    std::cout << "Ubicacion: " << getUbicacion() << std::endl;
    std::cout << "Frente: " << getFrente() << std::endl;
    std::cout << "Fondo: " << getFondo() << std::endl;
    std::cout << "Valor Catastral: " << getValorCatastral() << std::endl;
    std::cout << "Precio: " << precioVenta(.1) << std::endl;
}

inmuebule::~inmuebule() {

}
