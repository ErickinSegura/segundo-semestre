//
// Created by conta on 23/05/2023.
//

#include "paquete.h"
#include "envio.h"


#include <iostream>


paquete::paquete() {
    largo = 0;
    ancho = 0;
    profundidad = 0;
    peso = 0;
    costoKg = 90;
}

paquete::paquete(int costoSTD, int largo, int ancho, int profundidad, int peso, int costoKg) : envio(costoSTD) {
    largo = largo;
    ancho = ancho;
    profundidad = profundidad;
    peso = peso;
    costoKg = costoKg;
}

void paquete::setLargo(int largo) {
    largo = largo;
}

void paquete::setAncho(int ancho) {
    ancho = ancho;
}

void paquete::setProfundidad(int profundidad) {
    profundidad = profundidad;
}

void paquete::setPeso(int peso) {
    peso = peso;
}

void paquete::setCostoKg(int costoKg) {
    costoKg = costoKg;
}

int paquete::getLargo() {
    return largo;
}

int paquete::getAncho() {
    return ancho;
}

int paquete::getProfundidad() {
    return profundidad;
}

int paquete::getPeso() {
    return peso;
}

int paquete::getCostoKg() {
    return costoKg;
}

double paquete::calculaCosto() {
    return (costoSTD + (peso*costoKg));
}

void paquete::datosPaquete() {
    std::cout<<"Ingrese el largo del paquete"<<std::endl;
    std::cin>>largo;
    std::cout<<"Ingrese el ancho del paquete"<<std::endl;
    std::cin>>ancho;
    std::cout<<"Ingrese la profundidad del paquete"<<std::endl;
    std::cin>>profundidad;
    std::cout<<"Ingrese el peso del paquete"<<std::endl;
    std::cin>>peso;
}

void paquete::llenadoDatos() {

    std::cout<<"<---- Ingresar los datos del remitente ---->"<<std::endl;
    getRemitente();
    std::cout<<"<---- Ingresar los datos del destinatario ---->"<<std::endl;
    getDestinatario();
    std::cout<<"<---- Ingresar los datos del paquete ---->"<<std::endl;
    datosPaquete();

    system("cls");
    std::cout<<"<---- Envio ---->"<<std::endl;
    printDatos();
    std::cout<<"El costo del envio es: "<<calculaCosto()<<std::endl;
    system("pause");
}


paquete::~paquete() {

}


