#include <iostream>
#include "shape.h"
#include "circulo.h"
#include "triangulo.h"
#include "cuadrado.h"
#include "poligono.h"

using namespace std;

int main() {

    shape fig(1,2);

    cout << fig.draw()<< "con coordenada X en:" << fig.getX() << " y coordenada Y en: " << fig.getY() << endl;

    circulo circ(3,4,5);

    cout << circ.draw()<< "con coordenada X en: " << circ.getX() << " y coordenada Y en: " << circ.getY() << " y radio: " << circ.getRadio() << ". Ademas con area: " << circ.area() << endl;

    triangulo tri(6,7,8,9);

    cout << tri.draw()<< "con coordenada X en: " << tri.getX() << " y coordenada Y en: " << tri.getY() << " y base: " << tri.getBase() << " y altura: " << tri.getAltura() << ". Ademas con area: " << tri.area() << endl;

    cuadrado cua(10,11,12);

    cout << cua.draw()<< "con coordenada X en: " << cua.getX() << " y coordenada Y en: " << cua.getY() << " y lado: " << cua.getLado() << ". Ademas con area: " << cua.area() << endl;

    poligono pol(13,14,15,16,17);

    cout << pol.draw()<< "con coordenada X en: " << pol.getX() << " y coordenada Y en: " << pol.getY() << " y base: " << pol.getBase() << " y numero de lados: " << pol.getNlado() << " y apotema: " << pol.getApotema() << ". Ademas con area: " << pol.area() << endl;











    system("pause");
    return 0;
}
