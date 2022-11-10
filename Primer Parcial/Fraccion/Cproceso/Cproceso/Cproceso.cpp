
#include "Cproceso.h"

int Cproceso::getNum() const {
    return num;
}

void Cproceso::setNum(int num) {
    Cproceso::num = num;
}

int Cproceso::getDen() const {
    return den;
}

void Cproceso::setDen(int den) {
    Cproceso::den = den;
}

Cproceso::Cproceso(int num, int den){
    this->num=num;
    this->den=den;
}

Cproceso::~Cproceso(){
}

