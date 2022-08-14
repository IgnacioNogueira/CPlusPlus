#include <iostream>
#include <stdlib.h>
#include "Figura2D.h"
#include "Figura3D.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Esfera.h"
#include "throwException.h"
using namespace std;

#define ERROR_FEO -1;

int main()
{
    Figura2D * figuraBidimensional;
    Figura3D * figuraTridimensional;

    // Definir las variables necesarias

    //Asumo que trabajo en centimetros

    try
    {
        figuraBidimensional = new Circulo(-5);
        float area1 = figuraBidimensional -> area();
        float perimetro1 = figuraBidimensional -> perimetro();
        cout << "El area del circulo es: " << area1 << " cm^2" << endl;
        cout << "El perimetro del circulo es: " << perimetro1 << " cm" << endl;
        delete figuraBidimensional;
    }
    catch(ThrowException& c)
    {
        cout << "///////****Error en circulo****///////" << endl;
        cout << c.what() <<endl;
        //return ERROR_FEO;
    }

    try
    {
        cout << endl;
        figuraBidimensional = new Cuadrado(9);
        cout << "El area del circulo es: "<< figuraBidimensional -> area()<< " cm^2" << endl;
        cout << "El perimetro del circulo es: " << figuraBidimensional -> perimetro()<< " cm" << endl;
        delete figuraBidimensional;
    }
    catch(ThrowException& c)
    {
        cout << "///////****Error en cuadrado****///////" << endl;
        cout << c.what() <<endl;
        //return ERROR_FEO;
    }

    try
    {
        cout << endl;
        figuraBidimensional = new Triangulo(5, 0, 7);
        cout << "El area del triangulo es: " << figuraBidimensional -> area() << " cm^2" << endl;
        cout << "El area del triangulo es: " << figuraBidimensional -> perimetro() << " cm" << endl;
        delete figuraBidimensional;

    }
    catch(ThrowException& c)
    {
        cout << "///////****Error en triangulo****///////" << endl;
        cout << c.what() <<endl;
        //return ERROR_FEO;
    }


    try
    {
        cout << endl;
        figuraTridimensional = new Esfera(5);
        cout << "El area de la esfera es: " << figuraTridimensional -> area() << " cm^2" << endl;
        cout << "El volumen de la esfera es: " << figuraTridimensional -> volumen() << " cm^3" << endl;
        delete figuraTridimensional;
    }
    catch(ThrowException& c)
    {
        cout << "///////****Error en Esfera****///////" << endl;
        cout << c.what() <<endl;
        //return ERROR_FEO;
    }

    // Hacer lo mismo para Tetraedro y Cubo

    return 0;
}
