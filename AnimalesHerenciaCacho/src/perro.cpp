#include "perro.h"

Perro::Perro(string nombre,unsigned edad)
:Mascota(nombre,edad)
{
    //ctor
}

void Perro::moverCola(void)
{
    cout << "Soy un perro, muevo la cola" << endl;
}

ostream& operator <<(ostream &sal,const Perro &obj)
{
   return sal << "\n- Nombre del perro: " << obj._nombre
     << "\n- Edad: " << obj._edad << endl;

}


Perro::~Perro()
{
    //dtor
}
