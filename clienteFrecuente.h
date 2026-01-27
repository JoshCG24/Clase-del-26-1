//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H
#define CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H
#include"tarjetaDescuento.h"
#include <string>
#include <iostream>
#include <sstream>
#include "cliente.h"
using namespace std;

class clienteFrecuente: public cliente {
private:
    string direccion;
    int numeroTele;
    TarjetaDescuento* tarjeta;

public:
    // Constructor por defecto
    clienteFrecuente();

    clienteFrecuente(string nombre, int cedula, string direccion, int numeroTele, TarjetaDescuento* tarjeta);
    void setTarjetaDescuento(TarjetaDescuento* tarjeta);
    void setNumeroTele(int numeroTele);
    void setDireccion(string direccion);
    void setNombre(string nombre);
    TarjetaDescuento* getTarjetaDescuento() const;
    int getNumeroTele() const;
    string getDireccion() const;
    int getCedula() const;

    void toString() const;



};


#endif //CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H