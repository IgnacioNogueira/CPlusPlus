#include <iostream>
#include <stdlib.h>
#include <base.h>
#include <a.h>
#include <b.h>

using namespace std;
/*
int main()
{
    long cant = 100000000000;
    unsigned n =  0;

    while(true)
    {
        //double *x = (double*) malloc(cant);
        double * x = new double(cant); //si no tengo espacio para la memoria, te arroja un error de que pediste mucha memoria -> lo captura el runtime de c++
        cout << ++n << endl;
    }

    return 0;
}*/
/*
int main()
{
    try
    {
        cout << "Antes" << endl;
        throw 1;
        //throw 'a';
        //throw 1.5;
        cout << "Despues" << endl;
    }
    catch(int ex) //se ejecuta una linea, cuando agarra el primer error, no sigue con el resto
    {
        cout << "ex int " << ex << endl; //te agarra el valor del throw -> 1 (throw 1)

    }
    catch(char)
    {
        cout << "ex char" << endl;
        //throw "hola";

    } //puedo tener más de un tipo de dato -> se pueden tirar dif excepciones

    //si no coincide con ningún tipo de dato -> "te burbujea la solución" y arroja el problema con su tipo de dato


    return 0;
}
*/
/*
void f1()
{
    cout << "Antes" << endl;
    throw 1;
    cout << "Despues" << endl;

}

void f2()
{
    f1();
}

int main()
{
    try
    {
        //f1();
        f2();
    }
    catch(int ex) //se ejecuta una linea, cuando agarra el primer error, no sigue con el resto
    {
        cout << "ex int " << ex << endl; //te agarra el valor del throw -> 1 (throw 1)

    }
    catch(char)
    {
        cout << "ex char" << endl;

    } //puedo tener más de un tipo de dato -> se pueden tirar dif excepciones

    //si no coincide con ningún tipo de dato -> "te burbujea la solución" y arroja el problema con su tipo de dato


    return 0;
}
*/
/*
int main()
{
    Base * base = new A();
    *base ->hola();
   // base = new B();

    return 0;

}
*/


int superNegocio(int a, int b)
{
    if(b == 0)
        throw 1;

    return a/b;
}

int main()
{
    try
    {
        cout << "resultado"
             << superNegocio(10,5)
             << endl;
    }
    catch(Elefante) //podes llamar a una clase error ->"elefante" y tiras un status gracias a la clase
    {
        cout << "error" << endl;

    }
}
