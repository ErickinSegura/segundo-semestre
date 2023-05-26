//
// Created by conta on 26/05/2023.
//

#ifndef LISTASENALZADAS_NODO_H
#define LISTASENALZADAS_NODO_H


class nodo {
private:
    int dato;
    nodo *siguiente;
public:
    nodo();

    int getDato() const;

    void setDato(int dato);

    nodo *getSiguiente();

    void setSiguiente(nodo *siguiente);

    ~nodo();

};


#endif //LISTASENALZADAS_NODO_H
