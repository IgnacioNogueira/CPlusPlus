#include "Figura2D.h"
#include "Triangulo.h"
#include "throwException.h"
#include <math.h>

Triangulo::Triangulo(double lado1,double lado2,double lado3)
{
    if( lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
    {
        ThrowException t;
        throw t;
    }

    _l1 = lado1;
    _l2 = lado2;
    _l3 = lado3;
}

double Triangulo::perimetro() const
{
    return _l1+_l2+_l3;
}

double Triangulo::area() const //con la forma de HERÓN s = p/2
{
    double sumaLados = _l1+_l2+_l3;
    double s = sumaLados/2;
    double cuentHeron = s*(s-_l1)*(s-_l2)*(s-_l3);

    return sqrt(cuentHeron);
}

Triangulo::~Triangulo()
{
    //dtor
}
