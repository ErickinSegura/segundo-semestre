//
// Created by conta on 23/05/2023.
//

#include <iostream>
#include "unistd.h"


#include "menu.h"
#include "paquete.h"
#include "sobre.h"

paquete p;
sobre s;


menu::menu() {

}

void menu::showMenu() {

    while (true) {
        system("cls");
        std::cout<<"Bienvenido al portal de DHL"<<std::endl<<"Que tipo de envio desea realizar"<<std::endl;
        std::cout<<"1. Paquete"<<std::endl<<"2. Sobre"<<std::endl<<"3. Salir"<<std::endl;
        std::cout<<"Tu seleccion: ";

        int select = 0;
        std::cin>>select;

        switch (select) {
            case 1:
                system("cls");
                p.llenadoDatos();
                break;

            case 2:
                system("cls");
                s.llenarSobre();
                break;

            case 3:
                std::cout<<"Vuelve Pronto"<<std::endl;
                sleep(1);
                break;

            default:
                std::cout<<"Selecciona una opcion valida";
                sleep(1);
                continue;
        }
        break;

    }
}

menu::~menu() {

}
