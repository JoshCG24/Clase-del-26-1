//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H
#define CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H
#include"tarjetaDescuento.h"
#include <string>
using namespace std;

class clienteFrecuente {
private:
    string nombre;
    int id;
    string direccion;
    int numeroTele;
    tarjetaDescuento* tarjeta;
    public:
    clienteFrecuente();
    void setTarjetaDescuento(tarjetaDescuento*);
    void setNumeroTele(int);
    void setDireccion(string);
    void setId(int);
    void setNombre(string);
    tarjetaDescuento getTarjetaDescuento();
    int getNumeroTele();
    string getDireccion();
    int getId();
    string getNombre();
    ;


};


#endif //CLASE_DEL_26_1_26_CLIENTEFRECUENTE_H