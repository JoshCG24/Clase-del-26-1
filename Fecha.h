//
// Created by joshu on 1/26/2026.
//

#ifndef CLASE_DEL_26_1_26_FECHA_H
#define CLASE_DEL_26_1_26_FECHA_H


class Fecha {
private:
    int dia;
    int mes;
    int anno;
    public:
    Fecha();
    Fecha(int dia, int mes, int anno);
    void setDia(int dia);
    void setMes(int mes);
    void setAnno(int anno);
    int getDia();
    int getMes();
    int getAnno();

};


#endif //CLASE_DEL_26_1_26_FECHA_H