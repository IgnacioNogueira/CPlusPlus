#include "Pila.h"
#define TAM 500

int main()
{
    //estatica//

    const string a = "12345678";
    const string b = "1";
    string r;

    sumar(a,b,r);

    return 0;
}

/*
int main()
{
    //Dinamica
    // tengo que poner el getline(cin,s1);
    string s1("Hola");
    const string a = "9999";
    const string b = "1";
    string r;
    //const char a[TAM] = "99999";
    //const char b[TAM] = "1";
    //char r[TAM+1];

    cout << "\n-El resultado de la pila es de: %s" << endl;
    sumar(a,b,r);

    return 0;
}
*/
