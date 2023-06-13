//
// Created by conta on 13/06/2023.
//

#include "casa.h"
#include "inmuebule.h"
#include <iostream>

casa::casa() : inmuebule() {}

casa::casa(int frente, int fondo, int valorCatastral, std::string ubicacion) : inmuebule(frente, fondo, valorCatastral, ubicacion) {}

int casa::precioVenta(float incremento) {
    return getValorCatastral()*incremento/(incremento+1);
}

void casa::mostrarDatos() {
    std::cout << " ----------- Casa ----------- " << std::endl;
    std::cout << "Ubicacion: " << getUbicacion() << std::endl;
    std::cout << "Frente: " << getFrente() << std::endl;
    std::cout << "Fondo: " << getFondo() << std::endl;
    std::cout << "Valor Catastral: " << getValorCatastral() << std::endl;
    std::cout << "Precio de Venta en Privada: " << precioVenta(1.20) << std::endl;
    std::cout << "Precio de Venta en Calle: " << precioVenta(.80) << std::endl;
}
