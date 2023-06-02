//
// Created by conta on 24/05/2023.
//

#include <string>
#ifndef PAQUETERIA_PERSONA_H
#define PAQUETERIA_PERSONA_H


class persona {
private:
    std::string nombre;
    std::string direccion;
    std::string ciudad;
    int codigoPostal;
public:
    persona();
    persona(std::string nombre, std::string direccion, std::string ciudad, int codigoPostal);
    void setNombre(std::string nombre);
    void setDireccion(std::string direccion);
    void setCiudad(std::string ciudad);
    void setCodigoPostal(int codigoPostal);

    std::string getNombre();
    std::string getDireccion();
    std::string getCiudad();
    int getCodigoPostal();

    void llenadoDatos();
    void printDatos();

    ~persona();


};


#endif //PAQUETERIA_PERSONA_H
