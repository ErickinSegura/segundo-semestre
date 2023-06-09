//
// Created by conta on 09/06/2023.
//

#ifndef SOBRECARGA_RECT_H
#define SOBRECARGA_RECT_H


class Rect {
private:
    int x;
    int y;
public:
    Rect();
    Rect(int x, int y);

    Rect operator+(Rect val) {
        Rect temp;
        temp.y=y+val.y;
        temp.x=x+val.x;
        return temp;
    }

    Rect operator-(Rect val) {
        Rect temp;
        temp.y=y-val.y;
        temp.x=x-val.x;
        return temp;
    }

    int getX();
    int getY();

    ~Rect();

};


#endif //SOBRECARGA_RECT_H
