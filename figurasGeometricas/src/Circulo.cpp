#include "Figura2D.h"
#include "Circulo.h"
#include "throwException.h"
#define PI 3.1416


Circulo::Circulo(double radio)
{
    if(radio < 0)
    {
        ThrowException c;
        throw c;
    }

    _r = radio;
}

double Circulo::perimetro() const
{
    return 2*PI*_r;
}

double Circulo::area() const
{
    return PI * (_r*_r); //pi por r al cuadrado
}


Circulo::~Circulo()
{
    //dtor
}
