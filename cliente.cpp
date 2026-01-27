//
// Created by joshu on 1/26/2026.
//

#include "cliente.h"

cliente::cliente() {
    this -> nombre = "";
    this->cedula = 0;
}

cliente::cliente(string nombre, int cedula) {
    this->nombre = nombre;
    this->cedula = cedula;
}

string cliente::getNombre() {
    return this->nombre;
}

int cliente::getCedula() {
    return this->cedula;
}

void cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

void cliente::setCedula(int cedula) {
    this->cedula = cedula;
}
string cliente::toString()const {
    stringstream ss;
    ss <<"Nombre :"<< this->nombre << endl
        <<"Cedula : " << this->cedula << " ";
    return ss.str();
}
