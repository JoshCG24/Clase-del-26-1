//
// Created by joshu on 1/26/2026.
//

#include "tarjetaDescuento.h"
TarjetaDescuento::TarjetaDescuento() {
    this->numero = 0;
    this->limiteCredito = 0.0;
    this->pin = 0;
    this->porcentajeDescuento = 0;
    this->fechaVencimiento = nullptr;
}

// Constructor con parámetros
TarjetaDescuento::TarjetaDescuento(int numero, double limiteCredito, int pin, int porcentajeDescuento, Fecha *fechavencimiento) {
    this->numero = numero;
    this->limiteCredito = limiteCredito;
    this->pin = pin;
    this->porcentajeDescuento = porcentajeDescuento;
    this->fechaVencimiento = fechavencimiento;
}

// Métodos set
void TarjetaDescuento::setNumero(int numero) {
    this->numero = numero;
}

void TarjetaDescuento::setLimiteCredito(double limiteCredito) {
    this->limiteCredito = limiteCredito;
}

void TarjetaDescuento::setPin(int pin) {
    this->pin = pin;
}

void TarjetaDescuento::setPorcentajeDescuento(int porcentajeDescuento) {
    this->porcentajeDescuento = porcentajeDescuento;
}

void TarjetaDescuento::setFechavencimiento(Fecha *fechavencimiento) {
    this->fechaVencimiento = fechavencimiento;
}

// Métodos get
int TarjetaDescuento::getNumero() {
    return this->numero;
}

double TarjetaDescuento::getLimiteCredito() {
    return this->limiteCredito;
}

int TarjetaDescuento::getPin() {
    return this->pin;
}

int TarjetaDescuento::getPorcentajeDescuento() {
    return this->porcentajeDescuento;
}

Fecha* TarjetaDescuento::getFechavencimiento() {
    return this->fechaVencimiento;
}

string TarjetaDescuento::toString() const{
    string TarjetaDescuento::toString() const {
        stringstream ss;
        ss << "Número de tarjeta: " << this->numero << endl
           << "Límite de crédito: " << this->limiteCredito << endl
           << "PIN: " << this->pin << endl
           << "Porcentaje de descuento: " << this->porcentajeDescuento << "%" << endl
           << "Fecha de vencimiento: " << this->fechaVencimiento->dia << "/"
           << this->fechaVencimiento->mes << "/"
           << this->fechaVencimiento->anno << endl;
        return ss.str();
}
