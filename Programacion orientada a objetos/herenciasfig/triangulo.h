//
// Created by conta on 19/05/2023.
//

#ifndef HERENCIAS_TRIANGULO_H
#define HERENCIAS_TRIANGULO_H
#include "shape.h"


class triangulo: public shape {
private:
    int base;
    int altura;
public:
    triangulo();
    triangulo(int x, int y, int vbase, int valtura);

    int getBase();
    int getAltura();
    void setBase(int base);
    void setAltura(int altura);

    double area();

    ~triangulo();

};


#endif //HERENCIAS_TRIANGULO_H
