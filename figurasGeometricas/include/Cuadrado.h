#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura2D.h"
using namespace std;


class Cuadrado: public Figura2D
{
    private:
        double _l = 0;

    public:
        Cuadrado(double lado);
        virtual ~Cuadrado();

        double perimetro() const;
        double area() const;

    protected:

};

#endif // CUADRADO_H
