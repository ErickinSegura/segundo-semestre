//
// Created by conta on 19/05/2023.
//

#ifndef HERENCIAS_SHAPE_H
#define HERENCIAS_SHAPE_H
#include <iostream>

using namespace std;


class shape {
private:
    int x;
    int y;
public:
    shape();

    shape(int x, int y);
    virtual string draw();
    virtual int area();

    int getX();
    int getY();
    void setX(int x);
    void setY(int y);


    ~shape();

};


#endif //HERENCIAS_SHAPE_H
