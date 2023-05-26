//
// Created by conta on 23/05/2023.
//

#include "envio.h"
#include "persona.h"
#include <iostream>

persona remitente;
persona destinatario;

envio::envio() {
    costoSTD = 80;
}

envio::envio(int costoSTD) {
    this->costoSTD = costoSTD;
}


void envio::setCostoSTD(int costoSTD) {
    this->costoSTD = costoSTD;
}


int envio::getCostoSTD() {
    return costoSTD;
}


void envio::getRemitente() {
    remitente.llenadoDatos();

}

void envio::getDestinatario() {
    destinatario.llenadoDatos();

}

void envio::printDatos() {
    std::cout<<"<---- Remitente ---->"<<std::endl;
    remitente.printDatos();
    std::cout<<"<---- Destinatario ---->"<<std::endl;
    destinatario.printDatos();
}

double envio::calculaCosto() {
    return 0;
}


envio::~envio() {

}
