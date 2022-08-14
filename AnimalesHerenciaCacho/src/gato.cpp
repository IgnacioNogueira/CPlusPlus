#include "gato.h"

Gato::Gato(string nombre,unsigned edad)
:Mascota(nombre,edad)
{

}

void Gato::jugarConLaser(void)
{
    cout << "Soy un gato, juego con un laser" << endl;
}

ostream& operator <<(ostream &sal,const Gato &obj)
{
    return sal << "\n- Nombre del minino: " << obj._nombre
     << "\n- Edad: " << obj._edad << endl;
}
Gato::~Gato()
{
    //dtor
}
