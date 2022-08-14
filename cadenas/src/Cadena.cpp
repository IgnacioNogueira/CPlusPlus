#include "Cadena.h"

Cadena::Cadena()
{
    _cad = new char[1];
    *_cad = '\0';
}


Cadena::Cadena(const char* cad) //esto para asignarle a variables, valores a c1
{
    this->_cad = new char[miStrlen(cad)+1];
    miStrcpy(this->_cad,cad);

}

Cadena::Cadena(const Cadena& obj) //esto para asignarle a variables, valores a c2,c3
{
    this->_cad = new char[miStrlen(obj._cad)+1];
    miStrcpy(this->_cad,obj._cad);

}

size_t Cadena:: miStrlen(const char *cad) const
{
    size_t n = 0;
    while(*cad)
    {
        ++cad;
        ++n;
    }
    return n;
}

char * Cadena::miStrcpy(char * dest, const char * orig)
{
    char *aux = dest;

    while(*orig)
    {
        *dest = *orig;
        ++orig;
        ++dest;
    }

    *dest = '\0';

    return aux;
}

char * Cadena::miStrcat(char *dest,const char *orig)
{
    int tamDest = miStrlen(dest);
    char *aux = dest;
    dest+=tamDest;

    while(*orig)
    {
        *dest = *orig;
        ++orig;
        ++dest;
    }

    *dest = '\0';
    return aux;
}


size_t Cadena::longitud()
{
    return miStrlen(this->_cad);
}

//c4 = c1 + " de varios caracteres";

Cadena& Cadena::operator =(const Cadena& obj) //viene el tipo de objeto Cadena que está en la función de arriba (o sea, viene un bloque con info)
{
    if(this == &obj)
        return *this;

    //sirven para preguntar tamaños
    size_t tamObjParam = miStrlen(obj._cad);
    size_t tamObjBuffer = miStrlen(_cad);   // esto no porque uno es un char, y otro es un int this->_cad = strlen(objParam+1); //+1 por el barra cero

    if(tamObjBuffer != tamObjParam) //si no se asigno el tamaño suficiente -> esto sirve para memoria estática
    {
        delete [] _cad;
        _cad = new char[tamObjParam+1];
    }

    miStrcpy(this->_cad,obj._cad);

    return *this;
}


Cadena operator +(const Cadena& izq, const Cadena& der)
{
    Cadena cad;

    char *concat = new char[cad.miStrlen(izq._cad) + cad.miStrlen(der._cad)+1];
    cad.miStrcpy(concat,izq._cad);
    cad.miStrcat(concat,der._cad);

    return Cadena(concat);
}

ostream& operator <<(ostream& sal,const Cadena& obj)
{
    return sal << obj._cad;
}

istream& operator >> (istream& ent,Cadena &obj)
{
    Cadena cad;
    char * aux = new char[100];
    ent.getline(aux,100);

    int viejaLong = cad.miStrlen(obj._cad);
    int nuevaLong = cad.miStrlen(aux);

    if(viejaLong != nuevaLong)
    {
        delete [] obj._cad;
        obj._cad = new char[nuevaLong + 1];
    }

    cad.miStrcpy(obj._cad, aux);

    delete [] aux;

    return ent;

}

Cadena::~Cadena()
{
    //cout << "Destruyendo cadena: " << _cad << endl;
    delete [] _cad;
}
