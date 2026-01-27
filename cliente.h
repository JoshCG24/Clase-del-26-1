//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_CLIENTE_H
#define CLASE_DEL_26_1_26_CLIENTE_H
#include <string>
#include <sstream>
using namespace std;

class cliente {
private:
    string nombre;
    int cedula;
public:\
    cliente();
    cliente(string nombre, int cedula);
    string getNombre();
    int getCedula();
    void setNombre(string nombre);
    void setCedula(int cedula);
    string toString()const;
};


#endif //CLASE_DEL_26_1_26_CLIENTE_H