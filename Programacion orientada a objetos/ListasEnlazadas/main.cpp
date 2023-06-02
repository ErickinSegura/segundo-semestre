#include "lista.h"

int main() {

    lista l;

    l.insertaFin(5);
    l.insertaFin(10);
    l.insertaFin(15);
    l.insertaFin(20);
    l.insertaFin(25);
    l.insertaFin(30);
    l.insertaFin(35);
    l.insertaFin(40);
    l.insertaFin(10);


    l.elimina();

    l.recorre();

    return 0;
}
