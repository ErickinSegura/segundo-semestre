//
// Created by conta on 23/05/2023.
//

#ifndef PAQUETERIA_ENVIO_H
#define PAQUETERIA_ENVIO_H
#include <string>


class envio {

protected:
    int costoSTD;
public:
    envio();
    envio(int costoSTD);

    void setCostoSTD(int costoSTD);
    int getCostoSTD();

    void getRemitente();
    void getDestinatario();

    void printDatos();

    double calculaCosto();

    ~envio();

};


#endif //PAQUETERIA_ENVIO_H
