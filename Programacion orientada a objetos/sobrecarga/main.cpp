#include <iostream>
#include "Rect.h"
#include "Pola.h"

using namespace std;


int main() {

    Rect r1(10,20);
    Rect r2(30,40);
    Rect r3;

    r3=r1+r2;
    cout<<"("<<r3.getX()<<", "<<r3.getY()<<")"<<endl;

    r3=r1-r2;
    cout<<"("<<r3.getX()<<", "<<r3.getY()<<")"<<endl;

    Pola p1(3,30);
    Pola p2(1,-90);
    Pola p3;

    p3=p1/p2;
    cout<<"("<<p3.getR()<<", "<<p3.getAng()<<")"<<endl;

    p3=p1*p2;
    cout<<"("<<p3.getR()<<", "<<p3.getAng()<<")"<<endl;



    return 0;
}
