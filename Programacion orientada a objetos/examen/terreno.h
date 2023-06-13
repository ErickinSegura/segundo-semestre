//
// Created by conta on 13/06/2023.
//
#include "inmuebule.h"
#ifndef EXAMEN_TERRENO_H
#define EXAMEN_TERRENO_H


class terreno : public inmuebule {

public:
    terreno();
    terreno(int frente, int fondo, int valorCatastral, std::string ubicacion);

    int precioVenta(float incremento);

    void mostrarDatos();

    ~terreno();


};


#endif //EXAMEN_TERRENO_H
