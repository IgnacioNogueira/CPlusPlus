#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include <stdio.h>

using namespace std;

class Perro: public Mascota
{
    public:
        Perro(string nombre,unsigned edad);
        void moverCola(void);
        friend ostream& operator <<(ostream &sal,const Perro &obj);

        virtual ~Perro();
};

#endif // PERRO_H
