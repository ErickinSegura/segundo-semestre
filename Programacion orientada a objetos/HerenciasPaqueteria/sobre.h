//
// Created by conta on 25/05/2023.
//

#ifndef PAQUETERIA_SOBRE_H
#define PAQUETERIA_SOBRE_H
#include "envio.h"

class sobre: public envio {
private:
    int largo;
    int ancho;
    int cargoAdicional;
public:
    sobre();
    sobre(int largo, int ancho, int cargoAdicional);

    void setLargo(int largo);
    void setAncho(int ancho);
    void setCargoAdicional(int cargoAdicional);

    int getLargo();
    int getAncho();
    int getCargoAdicional();

    void datosSobre();
    void llenarSobre();

    double calculaCosto();

};


#endif //PAQUETERIA_SOBRE_H
