//
// Created by conta on 19/05/2023.
//

#ifndef HERENCIAS_CUADRADO_H
#define HERENCIAS_CUADRADO_H
#include "shape.h"


class cuadrado: public shape {
private:
    int lado;
public:
    cuadrado();
    cuadrado(int x, int y, int lado);



    int getLado();
    void setLado(int lado);

    string draw();
    int area();

    ~cuadrado();

};


#endif //HERENCIAS_CUADRADO_H
