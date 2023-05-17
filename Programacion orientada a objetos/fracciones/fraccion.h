//
// Created by Erick on 16/05/2023.
//

#ifndef FRACCIONES_FRACCION_H
#define FRACCIONES_FRACCION_H


class fraccion {
    private:
        int numerador, denominador;
    public:
    fraccion();

    void setNumerador();
    void setDenominador();

    int getNumerador();
    int getDenominador();

    int simplificar();

    void sumaFracc(fraccion fracc1, fraccion frac2);
    void multFracc(fraccion fracc1, fraccion frac2);


    void printSum();
    void printMult();


    ~fraccion();


};


#endif //FRACCIONES_FRACCION_H
