//
// Created by Erick on 16/05/2023.
//

#include "fraccion.h"
#include <iostream>
using namespace std;

fraccion::fraccion() {
    numerador = 0;
    denominador = 0;
}

void fraccion::setNumerador() {

    while (true){
        std::cout << "Escribe el numerador: ";
        std::cin >> numerador;
        if (numerador == 0 or numerador < 0){
            std::cout << "El numerador no puede ser o ser menor 0" << std::endl;
        } else {
            break;
        }
    }
}

void fraccion::setDenominador() {
    while (true){
        std::cout << "Escribe el denominador: ";
        std::cin >> denominador;
        if (denominador == 0 or denominador < 0){
            std::cout << "El denominador no puede ser o ser menor que 0" << std::endl;
        } else {
            break;
        }
    }
}

int fraccion::getNumerador() {
    return numerador;
}

int fraccion::getDenominador() {
    return denominador;
}

int fraccion::simplificar() {
    int mcd;
    for (int i = 1; i <= numerador && i <= denominador; i++) {
        if (numerador % i == 0 && denominador % i == 0) {
            mcd = i;
        }
    }
    numerador=numerador/mcd;
    denominador=denominador/mcd;
}

void fraccion::sumaFracc(fraccion frac1, fraccion frac2) {
    numerador = (frac1.getNumerador() * frac2.getDenominador()) + (frac2.getNumerador() * frac1.getDenominador());
    denominador = frac1.getDenominador() * frac2.getDenominador();
}

void fraccion::multFracc(fraccion frac1, fraccion frac2) {
    numerador = frac1.getNumerador() * frac2.getNumerador();
    denominador = frac1.getDenominador() * frac2.getDenominador();
}


void fraccion::printSum() {
    //Suma de fracciones
    if (denominador == 1) {
        cout << "La suma es: " << numerador<< endl;
    } else {
        cout << "La suma es: " << numerador << "/" << denominador<< endl;
    }
}

void fraccion::printMult() {
    //Multi de fracciones
    if (denominador == 1) {
        cout << "La multiplicacion es: " << numerador<< endl;
    } else {
        cout << "La multiplicacion es: " << numerador << "/" << denominador<< endl;
    }
}

fraccion::~fraccion() {

}
