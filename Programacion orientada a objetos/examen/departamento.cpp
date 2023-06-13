//
// Created by conta on 13/06/2023.
//

#include "departamento.h"
#include <iostream>

departamento::departamento() : inmuebule() {}

departamento::departamento(int frente, int fondo, int valorCatastral, std::string ubicacion) : inmuebule(frente, fondo, valorCatastral, ubicacion) {}

int departamento::precioVenta(float incremento) {
    return getValorCatastral()*incremento/(incremento+1);
}

void departamento::mostrarDatos() {
    std::cout << " ----------- Departamento ----------- " << std::endl;
    std::cout << "Ubicacion: " << getUbicacion() << std::endl;
    std::cout << "Frente: " << getFrente() << std::endl;
    std::cout << "Fondo: " << getFondo() << std::endl;
    std::cout << "Valor Catastral: " << getValorCatastral() << std::endl;
    std::cout << "Precio de Venta en Primera Planta: " << precioVenta(.80) << std::endl;
    std::cout << "Precio de Venta en Segunda Planta o mas: " << precioVenta(.50) << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
}
