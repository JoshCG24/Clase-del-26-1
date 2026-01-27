//
// Created by joshu on 1/26/2026.
//

#include "Fecha.h"

Fecha::Fecha() {
    dia = 0;
    mes = 0;
    anno = 0;
}

Fecha::Fecha(int dia, int mes, int anno) {
    this->dia = dia;
    this->mes = mes;
    this->anno = anno;
}

void Fecha::setDia(int dia) {
    this->dia = dia;
}

void Fecha::setMes(int mes) {
    this->mes = mes;
}

void Fecha::setAnno(int anno) {
    this->anno = anno;
}

int Fecha::getDia() {
    return this->dia;
}

int Fecha::getMes() {
    return this->mes;
}

int Fecha::getAnno() {
    return this->anno;
}
