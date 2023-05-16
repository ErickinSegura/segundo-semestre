#include "numero.h"

int main() {
    numero n1, n2;
    int r;

    n1.setNum(5);
    n2.setNum(10);

    r=n1.suma(n2);

    n1.impSum(r);



    return 0;
}
