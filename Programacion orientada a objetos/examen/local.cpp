//
// Created by conta on 13/06/2023.
//
#include "inmuebule.h"
#include "local.h"

local::local() {
}

local::local(int frente, int fondo, int valorCatastral, std::string ubicacion) : inmuebule(frente, fondo, valorCatastral, ubicacion) {
}

int local::precioVenta(float incremento) {
    return getValorCatastral()*incremento/(incremento+1);
}

void local::mostrarDatos() {
    std::cout << " ----------- Local ----------- " << std::endl;
    std::cout << "Ubicacion: " << getUbicacion() << std::endl;
    std::cout << "Frente: " << getFrente() << std::endl;
    std::cout << "Fondo: " << getFondo() << std::endl;
    std::cout << "Valor Catastral: " << getValorCatastral() << std::endl;
    std::cout << "Precio de Venta en Plaza Comercial: " << precioVenta(.60) << std::endl;
    std::cout << "Precio de Venta en Avenida: " << precioVenta(.40) << std::endl;
    std::cout << " ------------------------------- " << std::endl;
}



