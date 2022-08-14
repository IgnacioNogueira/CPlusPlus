#ifndef FECHA_H
#define FECHA_H

#define FECHA_ANIO_BASE 1600

#include <iostream>
using namespace std;

class Fecha
{
    private:
        unsigned _dia,
            _mes,
            _anio;

    public:

        Fecha(unsigned dia,unsigned mes,unsigned anio);
        virtual ~Fecha();

        bool esBisiesto(unsigned anio) const;
        unsigned cantDiasMes(unsigned mes, unsigned anio);
        bool fechaValida(unsigned dia, unsigned mes,unsigned anio);

        Fecha operator ++(int);
        Fecha operator --(int);//postdecremento
        Fecha operator ++(); //preincremento
        Fecha operator --(); //predecremento
        Fecha operator +=(unsigned dias);
        Fecha operator -=(unsigned dias);

        bool operator ==(const Fecha& fecha) const;
        bool operator !=(const Fecha& fecha) const;
        bool operator <(const Fecha& fecha) const;
        bool operator <= (const Fecha& fecha) const;
        bool operator >(const Fecha& fecha) const;
        bool operator >=(const Fecha& fecha) const;

        unsigned modulo(int n);

        friend ostream& operator<<(ostream& sal, const Fecha& obj);

};

#endif // FECHA_H
