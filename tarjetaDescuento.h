//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_TARJETADESCUENTO_H
#define CLASE_DEL_26_1_26_TARJETADESCUENTO_H
#include <string>
#include <sstream>
using namespace std;

#include "Fecha.h"

class TarjetaDescuento {
    private:
    int numero;
    double limiteCredito;
    int pin;
    int porcentajeDescuento;
    Fecha* fechaVencimiento;
    public:
    TarjetaDescuento();
    TarjetaDescuento(int numero, double limiteCredito, int pin, int porcentajeDescuento, Fecha* fechavencimiento);
    void setNumero(int numero);
    void setLimiteCredito(double limiteCredito);
    void setPin(int pin);
    void setPorcentajeDescuento(int porcentajeDescuento);
    void setFechavencimiento(Fecha *fechavencimiento);
    int getNumero();
    double getLimiteCredito();
    int getPin();
    int getPorcentajeDescuento();
    Fecha* getFechavencimiento();
    string toString()const;

};


#endif //CLASE_DEL_26_1_26_TARJETADESCUENTO_H