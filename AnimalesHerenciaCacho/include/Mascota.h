#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
using namespace std;

class Mascota
{
    protected:
        string _nombre;
        unsigned _edad;

    public:
        Mascota(string nombre,unsigned edad);
        void dormir(void);
        void comer(void);
        string getNombre() const;
        unsigned getEdad() const;

        virtual ~Mascota();
};

#endif // MASCOTA_H
