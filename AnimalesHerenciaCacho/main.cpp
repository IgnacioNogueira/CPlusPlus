#include <iostream>
#include "Mascota.h"
#include "perro.h"
#include "gato.h"

using namespace std;

int main()
{
    Perro akira("Akira",3);
    cout << "Solo Nombre del perro: " << akira.getNombre() << endl;
    cout << "Solo Edad del perro: " << akira.getEdad() << endl;
    cout << endl;
    cout << "Resumen: " << akira << endl;
    akira.dormir();
    akira.comer();
    akira.moverCola();
    cout << endl;

    Gato garfield("garfield",6);
    cout << "Solo Nombre del gato: " << garfield.getNombre() << endl;
    cout << "Solo Edad del gato: " << garfield.getEdad() << endl;
    cout << endl;
    cout << "Resumen: " << garfield << endl;
    garfield.dormir();
    garfield.comer();
    garfield.jugarConLaser();
    cout << endl;

    return 0;
}
