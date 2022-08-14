#include "Figura3D.h"
#include "Esfera.h"
#include "throwException.h"
#define PI2 3.1416

Esfera::Esfera(double radio)
{
    if(radio <=0)
    {
        ThrowException e;
        throw e;
    }

    _r = radio;
}



double Esfera::area() const
{
    return 4*PI2*(_r*_r);
}

double Esfera::volumen() const
{
    return (4/3)*PI2*(_r*_r*_r);
}


Esfera::~Esfera()
{
    //dtor
}
