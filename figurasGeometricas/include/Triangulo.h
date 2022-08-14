#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura2D.h"
#include <math.h>

using namespace std;

class Triangulo:public Figura2D
{
    private:
        double _l1 = 0,
               _l2 = 0,
               _l3 = 0;
    public:
        Triangulo(double lado1,double lado2,double lado3);
        virtual ~Triangulo();

        double perimetro() const;
        double area() const;

    protected:

};

#endif // TRIANGULO_H
