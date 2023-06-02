//
// Created by Erick on 16/05/2023.
//

#ifndef PRACTICA1_NUMERO_H
#define PRACTICA1_NUMERO_H


class numero {
    int num;
    int res;
public:
    numero();
    void setNum(int num);
    int getNum();
    int suma(numero n2);
    void impSum(int res);
    virtual ~numero();

};


#endif //PRACTICA1_NUMERO_H
