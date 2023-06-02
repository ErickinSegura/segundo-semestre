//
// Created by conta on 26/05/2023.
//

#ifndef LISTASENALZADAS_LISTA_H
#define LISTASENALZADAS_LISTA_H

#include "nodo.h"

class lista {
private:
    nodo *cabeza;
public:
    lista();
    void insertaIni(int dato);
    void insertaFin(int dato);
    void recorre();
    void elimina();
    void insertaOrd(int dato);
    ~lista();
};


#endif //LISTASENALZADAS_LISTA_H
