#ifndef ESFERA_H
#define ESFERA_H

#include "Figura3D.h"
#define PI2 3.1416

class Esfera: public Figura3D
{
private:
    double _r = 0;


public:
    Esfera(double radio);
    virtual ~Esfera();
    double area() const;
    double volumen() const;



protected:

};

#endif // ESFERA_H
