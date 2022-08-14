#include "Complejo.h"
#include <iostream>
using namespace std;


Complejo::Complejo() //para c4
{
    this->_real = 0;
    this->_imag = 0;
}


Complejo::Complejo(int real,int imaginario)
{
    this->_real = real;
    this->_imag = imaginario;
}

Complejo& Complejo:: operator =(const Complejo& obj)
{
    if(this == &obj)
        return *this;

    this->_real = obj._real;
    this->_imag = obj._imag;

    return *this;
}

Complejo Complejo::operator +(const Complejo &obj)
{
    int sumaReal;
    int sumaImag;

    sumaReal = this->_real + obj._real;
    sumaImag = this->_imag + obj._imag;

    return Complejo(sumaReal,sumaImag);
}

Complejo operator *(const int esc,const Complejo &obj)
{
    int mult1 = esc * obj._real;
    int mult2 = esc * obj._imag;

    return Complejo(mult1,mult2);
}


Complejo operator *(const Complejo &obj1,const Complejo &obj2)
{
    //(a, b) * (a, b) = (ar1*ar2 – ar1*bi2, br1*ar1 + br1*bi2)

    int mult1 = (obj1._real * obj2._real - obj1._real*obj2._imag);
    int mult2 = (obj1._imag*obj2._real + obj1._imag * obj2._imag);
    return Complejo(mult1,mult2);
}


ostream& operator << (ostream& sal,const Complejo &obj)
{
    return sal << '(' << obj._real << ',' << obj._imag << ')';
}

Complejo::~Complejo()
{
    //dtor
}
