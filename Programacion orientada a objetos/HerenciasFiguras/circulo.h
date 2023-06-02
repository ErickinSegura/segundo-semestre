//
// Created by conta on 19/05/2023.
//

#ifndef HERENCIAS_CIRCULO_H
#define HERENCIAS_CIRCULO_H
#include "shape.h"


class circulo:public shape {

private:
    double radio;
public:
    circulo();
    circulo(int x, int y, double radio);

    double getRadio();
    void setRadio(double radio);

    double area();

    ~circulo();

};


#endif //HERENCIAS_CIRCULO_H
