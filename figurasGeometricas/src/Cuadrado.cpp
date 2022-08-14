#include "Figura2D.h"
#include "Cuadrado.h"
#include "throwException.h"
using namespace std;

Cuadrado::Cuadrado(double lado)
{
    if(lado <=0)
    {
        ThrowException c;
        throw c;
    }
    this->_l = lado;
}

double Cuadrado::perimetro() const
{
    return _l*4;
}

double Cuadrado::area() const
{
    return _l*_l;
}

Cuadrado::~Cuadrado()
{
    //dtor
}
