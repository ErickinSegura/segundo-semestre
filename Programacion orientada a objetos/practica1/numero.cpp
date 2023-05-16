//
// Created by Erick on 16/05/2023.
//

#include "numero.h"
#include <iostream>

numero::numero() {
    num = 0;
    res=0;
}

void numero::setNum(int num) {
    this -> num = num;
}

int numero::getNum() {
    return num;
}

int numero::suma(numero n2) {
    return num + n2.getNum();
}

void numero::impSum(int res) {
    std::cout << "La suma es: " << res << std::endl;
}


numero::~numero() {

}
