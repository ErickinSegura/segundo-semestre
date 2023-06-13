//
// Created by conta on 13/06/2023.
//

#include <iostream>
#include "inmuebule.h"

#ifndef EXAMEN_LOCAL_H
#define EXAMEN_LOCAL_H


class local : public inmuebule {
public:
    local();
    local(int frente, int fondo, int valorCatastral, std::string ubicacion);


    int precioVenta(float incremento);
    void mostrarDatos();

    ~local();


};


#endif //EXAMEN_LOCAL_H
