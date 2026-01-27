//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_TARJETADESCUENTO_H
#define CLASE_DEL_26_1_26_TARJETADESCUENTO_H
#include "Fecha.h"

class tarjetaDescuento {
    private:
    int numero;
    double interCredito;
    int pin;
    int porcentajeDescuento;
    Fecha fechavencimiento;
    public:
    tarjetaDescuento();
    void setNumero(int numero);
    void setInterCredito(double interCredito);
    void setPin(int pin);
    void setPorcentajeDescuento(int porcentajeDescuento);
    void setFechavencimiento(Fecha *fechavencimiento);

};


#endif //CLASE_DEL_26_1_26_TARJETADESCUENTO_H