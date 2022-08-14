#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura2D.h"
#define PI 3.1416
#include "throwException.h"
using namespace std;

class Circulo: public Figura2D
{
    private:
        double _r = 0;

    public:
        Circulo(double radio);
        virtual ~Circulo();

        /* tengo que volver a redefinir las clases */
        double perimetro() const;
        double area() const;

    protected:

};

#endif // CIRCULO_H
