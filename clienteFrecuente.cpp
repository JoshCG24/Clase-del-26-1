//
// Created by joshu on 1/26/2026.
//

#include "clienteFrecuente.h"
clienteFrecuente::clienteFrecuente() : cliente() {
    this->direccion = "";
    this->numeroTele = 0;
    this->tarjeta = nullptr;
}

// Constructor con parámetros
clienteFrecuente::clienteFrecuente(string nombre, int cedula, string direccion, int numeroTele, TarjetaDescuento* tarjeta)
    : cliente(nombre, cedula) {  // Llamar al constructor de la clase base (Cliente)
    this->direccion = direccion;
    this->numeroTele = numeroTele;
    this->tarjeta = tarjeta;
}

// Métodos set
void clienteFrecuente::setTarjetaDescuento(TarjetaDescuento* tarjeta) {
    this->tarjeta = tarjeta;
}

void clienteFrecuente::setNumeroTele(int numeroTele) {
    this->numeroTele = numeroTele;
}

void clienteFrecuente::setDireccion(string direccion) {
    this->direccion = direccion;
}

void clienteFrecuente::setNombre(string nombre) {
    this-> setNombre(nombre);
}

// Métodos get
TarjetaDescuento* clienteFrecuente::getTarjetaDescuento() const {
    return this->tarjeta;
}

int clienteFrecuente::getNumeroTele() const {
    return this->numeroTele;
}

string clienteFrecuente::getDireccion() const {
    return this->direccion;
}

int clienteFrecuente::getCedula() const {
    return this->getCedula();
}

// Sobrescribir el método mostrarInfo para incluir la información adicional de cliente frecuente
void clienteFrecuente::toString() const {
    stringstream ss;
    cliente::toString();  // Llamar a mostrarInfo de la clase base (Cliente)
    cout << "Dirección: " << this->direccion << endl;
    cout << "Número de teléfono: " << this->numeroTele << endl;
    if (this->tarjeta) {
        this->tarjeta->toString();
    }
}