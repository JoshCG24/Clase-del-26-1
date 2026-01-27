//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_CAJA_H
#define CLASE_DEL_26_1_26_CAJA_H
#include "Factura.h"

class Caja {
private:
    int numero;
    Factura factura;
    public:
    Caja();
    Caja(int numero, Factura factura);
    void setNumero(int numero);
    void setFactura(Factura factura);
    int getNumero();
    Factura getFactura();
};


#endif //CLASE_DEL_26_1_26_CAJA_H