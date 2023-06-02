#include <iostream>
#include "fraccion.h"
using namespace std;

int main() {

    int r;
    fraccion f1, f2, resf;

    f1.setNumerador();
    f1.setDenominador();
    f1.simplificar();


    f2.setNumerador();
    f2.setDenominador();
    f2.simplificar();



    resf.sumaFracc(f1,f2);
    resf.simplificar();
    resf.printSum();

    resf.multFracc(f1,f2);
    resf.simplificar();
    resf.printMult();

    return 0;
}
