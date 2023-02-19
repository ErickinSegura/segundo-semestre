#include <iostream>
using namespace std;

int main() {

   //Practica 1
   //Erick Segura Sanchez
   //15/02/2023

   //Variables

   int proposicion1;
   int proposicion2;
   int seleccion;

   //Menu

   //Intro
   cout << "Calculaodra de Proposiciones" << endl;
   cout << "Escribe el valor (1 para Verdadero o 0 para Falso) 2 proposciones a comparar" << endl;
   cout << "Proposicion 1: " << endl;
   cin >> proposicion1;
   cout << "Proposicion 2: " << endl;
   cin >> proposicion2;

   //Validacion de datos

    if (proposicion1 != 1 and proposicion1 != 0) {
         cout << "Proposicion 1 no valida" << endl;
         return 0;
    }
    if (proposicion2 != 1 and proposicion2 != 0) {
         cout << "Proposicion 2 no valida" << endl;
         return 0;
    }

   //Seleccion de Operaciones

   cout << "Selecciona la operacion a realizar" << endl;
   cout << "1. Conjuncion" << endl;
   cout << "2. Disyuncion" << endl;
   cout << "3. Salir" << endl;
   cin >> seleccion;

    //Operaciones

    switch (seleccion) {
        case 1:
            //Conjuncion
            if (proposicion1 == 1 and proposicion2 == 1) {
                cout << "Tu Conjuncion es Verdadera" << endl;
            } else {
                cout << "Tu Conjuncion es Falsa" << endl;
            }
            break;
        case 2:
            //Disyuncion
            if (proposicion1 == 0 and proposicion2 == 0) {
                cout << "Tu Disyuncion es Falsa" << endl;
            } else {
                cout << "Tu Disyuncion es Verdadera" << endl;
            }
            break;
        case 3:
            cout << "Salir" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}
