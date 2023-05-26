//
// Created by conta on 24/05/2023.
//

#include "persona.h"
#include <iostream>
#include <string>

persona::persona() {
    nombre = "";
    direccion = "";
    ciudad = "";
    codigoPostal = 0;
}

persona::persona(std::string nombre, std::string direccion, std::string ciudad, int codigoPostal) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->ciudad = ciudad;
    this->codigoPostal = codigoPostal;
}

void persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void persona::setDireccion(std::string direccion) {
    this->direccion = direccion;
}

void persona::setCiudad(std::string ciudad) {
    this->ciudad = ciudad;
}

void persona::setCodigoPostal(int codigoPostal) {
    this->codigoPostal = codigoPostal;
}

std::string persona::getNombre() {
    return nombre;
}

std::string persona::getDireccion() {
    return direccion;
}

std::string persona::getCiudad() {
    return ciudad;
}

int persona::getCodigoPostal() {
    return codigoPostal;
}

void persona::llenadoDatos() {
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Direccion: ";
    std::cin >> direccion;
    std::cout << "Ciudad: ";
    std::cin >> ciudad;
    std::cout << "Codigo Postal: ";
    std::cin >> codigoPostal;
}

void persona::printDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Direccion: " << direccion << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;
    std::cout << "Codigo Postal: " << codigoPostal << std::endl;
}


persona::~persona() {

}

