#include "Boolean.h"

/* //(2)// -> revisar .h que hay explicación
Boolean::Boolean()
{
    _valor = 0;

    //ctor por defecto
}
*/

Boolean::Boolean(int x) // A
    :_valor(x) //inicializador -> //se va a dejar en un estado consistente (se pasa en el () como trueboolean(0))
{
    //_valor = x; -> es equivalente al inicializador, pero futuramente se va a agradecer el inicializador

    if(x != 0)
    {
        _valor = 1;
    }// sino básicamente devuelve lo que tiene el inicializador
}

Boolean Boolean::_and(const Boolean &x) const
{
    Boolean res;
    if(_valor == x._valor)
    {
        res._valor = 0;
    }
    else
    {
        res._valor = 1;
    }
    return res;
}

Boolean Boolean::_or(const Boolean &x) const
{
    //Boolean res;
    return x;
}

Boolean Boolean::_not() const //acá está bien que se ponga const, ya que no es que se va a modificar algún valor de la clase. La unico que va a tomar un valor es res, pero no tiene nada que ver con la variable a asignar
{
    Boolean res(_valor); //hay que basarse en el valor correspodiente

    if(res._valor == 0)
    {
        res._valor = 1;
    }
    else
    {
        res._valor = 0;
    }

    return res;
}

int Boolean:: getValue() const
{
    return _valor;
}


Boolean::~Boolean()
{
    //dtor
}


