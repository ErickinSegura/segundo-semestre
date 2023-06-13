//
// Created by conta on 13/06/2023.
//
#include <iostream>

#include "terreno.h"
#include "inmuebule.h"

terreno::terreno() {
}

terreno::terreno(int frente, int fondo, int valorCatastral, std::string ubicacion) : inmuebule(frente, fondo, valorCatastral, ubicacion) {
}

int terreno::precioVenta(float incremento) {
    return getValorCatastral()*(incremento)/(incremento+1);
}

void terreno::mostrarDatos() {
    std::cout << " ----------- Terreno ----------- " << std::endl;
    std::cout << "Ubicacion: " << getUbicacion() << std::endl;
    std::cout << "Frente: " << getFrente() << std::endl;
    std::cout << "Fondo: " << getFondo() << std::endl;
    std::cout << "Valor Catastral: " << getValorCatastral() << std::endl;
    std::cout << "Precio de Venta con Servicios: " << precioVenta(.60) << std::endl;
    std::cout << "Precio de Venta sin Servicios: " << precioVenta(.20) << std::endl;
    std::cout << " ------------------------------- " << std::endl;
}

terreno::~terreno() {
}








