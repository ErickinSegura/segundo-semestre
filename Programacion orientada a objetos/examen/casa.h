//
// Created by conta on 13/06/2023.
//

#ifndef EXAMEN_CASA_H
#define EXAMEN_CASA_H

#include "inmuebule.h"


class casa : public inmuebule {
public:
    casa();
    casa(int frente, int fondo, int valorCatastral, std::string ubicacion);

    int precioVenta(float incremento);
    void mostrarDatos();

    ~casa();


};


#endif //EXAMEN_CASA_H
