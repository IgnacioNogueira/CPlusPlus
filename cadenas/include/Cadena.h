#ifndef CADENA_H
#define CADENA_H

#include <iostream>
#include<string.h>
using namespace std;

class Cadena
{
private:
    char * _cad;
    size_t miStrlen(const char *cad) const;
    char * miStrcpy(char * dest, const char * orig);
    char * miStrcat(char *dest,const char *orig);

public:

    Cadena();
    Cadena(const char* cad); // //esto para asignarle a variables, valores a c1
    Cadena(const Cadena& obj); //esto para asignarle a variables, valores a c2,c3
    ~Cadena();

    friend Cadena operator +(const Cadena& izq, const Cadena& der);

    //Cadena operator +(const char *cad);
    //Cadena operator +(const Cadena& cad);
    Cadena& operator =(const Cadena& obj);
    size_t longitud();



    friend ostream& operator <<(ostream& sal,const Cadena &obj);
    friend istream& operator >> (istream& ent,Cadena &obj);

};

#endif // CADENA_H
