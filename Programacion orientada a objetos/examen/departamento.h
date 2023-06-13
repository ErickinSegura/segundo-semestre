//
// Created by conta on 13/06/2023.
//

#ifndef EXAMEN_DEPARTAMENTO_H
#define EXAMEN_DEPARTAMENTO_H
#include "inmuebule.h"

class departamento : public inmuebule {
public:
    departamento();
    departamento(int frente, int fondo, int valorCatastral, std::string ubicacion);

    int precioVenta(float incremento);
    void mostrarDatos();

    ~departamento();

};


#endif //EXAMEN_DEPARTAMENTO_H
