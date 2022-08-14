#include "Mascota.h"

Mascota::Mascota(string nombre,unsigned edad)
{
    this->_nombre = nombre;
    this->_edad = edad;
}

void Mascota::dormir(void)
{
    cout << "Soy una mascota, voy a dormir" << endl;
}

void Mascota::comer(void)
{
    cout << "Soy una mascota, voy a comer" << endl;
}

string Mascota::getNombre() const
{
    return _nombre;
}

unsigned Mascota::getEdad() const
{
    return _edad;
}

Mascota::~Mascota()
{
    //dtor
}
