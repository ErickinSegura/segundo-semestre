//
// Created by conta on 25/05/2023.
//

#include "sobre.h"
#include "envio.h"
#include "menu.h"

menu m;

#include <iostream>

sobre::sobre() {
    largo = 0;
    ancho = 0;
    cargoAdicional = 75;
}

sobre::sobre(int largo, int ancho, int cargoAdicional) : envio(costoSTD) {
    largo = largo;
    ancho = ancho;
    cargoAdicional = cargoAdicional;
}

void sobre::setLargo(int largo) {
    largo = largo;
}

void sobre::setAncho(int ancho) {
    ancho = ancho;
}

void sobre::setCargoAdicional(int cargoAdicional) {
    cargoAdicional = cargoAdicional;
}

int sobre::getLargo() {
    return largo;
}

int sobre::getAncho() {
    return ancho;
}

int sobre::getCargoAdicional() {
    return cargoAdicional;
}

void sobre::llenarSobre() {
    std::cout<<"<---- Ingresar los datos del remitente ---->"<<std::endl;
    getRemitente();
    std::cout<<"<---- Ingresar los datos del destinatario ---->"<<std::endl;
    getDestinatario();
    std::cout<<"<---- Ingresar los datos del sobre ---->"<<std::endl;
    datosSobre();

    system("cls");
    std::cout<<"<---- Envio ---->"<<std::endl;
    printDatos();
    std::cout<<"El costo del envio es: "<<calculaCosto()<<std::endl;
    system("pause");
    m.showMenu();

}

void sobre::datosSobre() {
    std::cout<<"Ingrese el largo del sobre"<<std::endl;
    std::cin>>largo;
    std::cout<<"Ingrese el ancho del sobre"<<std::endl;
    std::cin>>ancho;
}


double sobre::calculaCosto() {
    if ((largo > 25 || ancho > 30) or (largo > 30 || ancho > 25)){
        return (costoSTD + cargoAdicional);
    } else {
        return costoSTD;
    }
}

