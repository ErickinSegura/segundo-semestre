//
// Created by conta on 09/06/2023.
//

#ifndef SOBRECARGA_POLA_H
#define SOBRECARGA_POLA_H


class Pola {
private:
    int r;
    int ang;
public:
    Pola();
    Pola(int r, int ang);

    Pola operator/(Pola val) {
        Pola temp;
        temp.r=r/val.r;
        temp.ang=ang-val.ang;
        return temp;
    }

    Pola operator*(Pola val) {
        Pola temp;
        temp.r=r*val.r;
        temp.ang=ang+val.ang;
        return temp;
    }

    int getR();
    int getAng();

    ~Pola();

};


#endif //SOBRECARGA_POLA_H
