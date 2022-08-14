#ifndef GATO_H
#define GATO_H

#include "Mascota.h"
#include <stdio.h>
using namespace std;

class Gato: public Mascota
{
    public:
        Gato(string nombre,unsigned edad);
        void jugarConLaser(void);

        friend ostream& operator <<(ostream &sal,const Gato &obj);

        virtual ~Gato();

};

#endif // GATO_H
