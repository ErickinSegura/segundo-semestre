//
// Created by conta on 23/05/2023.
//

#ifndef PAQUETERIA_PAQUETE_H
#define PAQUETERIA_PAQUETE_H
#include "envio.h"


class paquete: public envio {
    private:
    int largo;
    int ancho;
    int profundidad;
    int peso;
    int costoKg;

    public:
    paquete();
    paquete(int costoSTD, int largo, int ancho, int profundidad, int peso, int costoKg);

    void setLargo(int largo);
    void setAncho(int ancho);
    void setProfundidad(int profundidad);
    void setPeso(int peso);
    void setCostoKg(int costoKg);

    int getLargo();
    int getAncho();
    int getProfundidad();
    int getPeso();
    int getCostoKg();

    void llenadoDatos();
    void datosPaquete();

    double calculaCosto();

    ~paquete();

};


#endif //PAQUETERIA_PAQUETE_H
