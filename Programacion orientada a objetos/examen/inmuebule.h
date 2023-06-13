//
// Created by conta on 13/06/2023.
//



#ifndef EXAMEN_INMUEBULE_H
#define EXAMEN_INMUEBULE_H

#include <string>


class inmuebule {
private:
    int frente, fondo, valorCatastral;
    std::string ubicacion;
public:
    inmuebule();
    inmuebule(int frente, int fondo, int valorCatastral, std::string ubicacion);

    int getFrente();
    void setFrente(int frente);
    int getFondo();
    void setFondo(int fondo);
    int getValorCatastral();
    void setValorCatastral(int valorCatastral);

    std::string getUbicacion();
    void setUbicacion(std::string ubicacion);

    virtual int precioVenta(float incremento);
    virtual void mostrarDatos();

    ~inmuebule();
};


#endif //EXAMEN_INMUEBULE_H
