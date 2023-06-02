//
// Created by conta on 19/05/2023.
//

#ifndef HERENCIAS_POLIGONO_H
#define HERENCIAS_POLIGONO_H
#include "shape.h"


class poligono: public shape {

private:
    int nlado;
    int base;
    int apotema;

public:

    poligono();
    poligono(int x, int y, int base, int nlado, int apotema);

    int getBase();
    int getNlado();
    int getApotema();

    void setBase(int vbase);
    void setNlado(int vnlado);
    void setApotema(int vapotema);


    double area();

    ~poligono();



};


#endif //HERENCIAS_POLIGONO_H
