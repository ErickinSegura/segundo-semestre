#include <vector>
#include "terreno.h"
#include "inmuebule.h"
#include "local.h"
#include "casa.h"
#include "departamento.h"

int main() {

    system("color 0c");

    std::vector<inmuebule*> inmuebles;

    inmuebles.push_back(new terreno(10, 20, 100000, "Calle 1"));
    inmuebles.push_back(new local(10, 20, 800000, "Calle 2"));
    inmuebles.push_back(new casa(10, 20, 500000, "Calle 3"));
    inmuebles.push_back(new departamento(10, 20, 600000, "Calle 4"));

    for (std::vector<inmuebule*>::const_iterator i = inmuebles.begin(); i != inmuebles.end(); ++i) {
        (*i)->mostrarDatos();
    }
    system("pause");

    return 0;
}
