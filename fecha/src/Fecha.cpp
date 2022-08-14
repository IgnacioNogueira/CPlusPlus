#include "Fecha.h"

Fecha::Fecha(unsigned dia,unsigned mes,unsigned anio)
{
    if(fechaValida(dia,mes,anio))
    {
        _dia = dia;
        _mes = mes;
        _anio = anio;
    }
}

bool Fecha::fechaValida(unsigned dia, unsigned mes,unsigned anio)
{
    return anio >=FECHA_ANIO_BASE && mes >=1 && mes <=12 && dia>=1 && dia<=cantDiasMes(mes,anio);
}

bool Fecha::esBisiesto(unsigned anio) const
{
    return ((anio%4 == 0 && anio%100 !=0) || (anio%400 == 0));

}

unsigned Fecha::cantDiasMes(unsigned mes, unsigned anio)
{
    unsigned diaMes[2][12] =
    {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    return diaMes[esBisiesto(anio)][mes-1];
}
//1 3 5 7 8 10 12

bool Fecha::operator ==(const Fecha& fecha) const
{
    return _anio == fecha._anio && _mes == fecha._mes && _dia == fecha._dia;
}

bool Fecha::operator !=(const Fecha& fecha) const
{
    return _anio != fecha._anio || _mes != fecha._mes || _dia != fecha._dia;
}

/*
bool Fecha::operator <(const Fecha& fecha) const
{
    if(_anio > fecha._anio)
    {
        return false;
        if(_mes > fecha._mes )
        {
            return false;
        }
        else
        {
            return true;
        }
    }


    return true;
}

bool Fecha::operator <=(const Fecha& fecha) const
{
    if(_anio <= fecha._anio)
    {
        return true;
    }

    else if(_mes <= fecha._mes)
    {
        return true;
    }
    else
    {
        return true
    }

    return false;
}


bool Fecha::operator >(const Fecha& fecha) const
{
    if(_anio < fecha._anio)
        return true;

    if(_mes < fecha._mes)
        return true;

    if(_dia < fecha._dia)
        return true

               return false;
}

bool Fecha::operator >=(const Fecha& fecha) const
{
    return _anio >= fecha._anio && _mes >= fecha._mes && _dia >= fecha._dia;
}
*/

Fecha Fecha::operator +=(unsigned dias)
{
    Fecha fechaAux(*this);

    while(dias)
    {
        _dia++;

        if(_dia > cantDiasMes(_mes,_anio))
        {
            _dia = 1;
            _mes++;
        }

        if(_mes > 12)
        {
            _mes = 1;
            _anio++;
        }

        dias--;
    }

    return fechaAux; //Devuelvo el valor actual
}

Fecha Fecha::operator -=(unsigned dias)
{
    Fecha fechaAux(*this);

    while(dias)
    {
        _dia--;

        if(_dia < 1)
        {
            _mes--;

            if(_mes < 1)
            {
                _mes = 12;
                _anio--;
            }

            _dia = cantDiasMes(_mes,_anio);
        }

        dias--;
    }

    return fechaAux; //Devuelvo el valor actual
}


unsigned Fecha:: modulo(int n)
{
    return n*(-1);
}
/*
Fecha Fecha::operator -=(unsigned dias)
{
    Fecha fechaAux(*this);
    unsigned dif;
    _dia -= dias;

    if(_dia < 1)
    {
        if(_mes == 1)
        {
            _mes=12;
            _anio--;
        }
        else
        {
            _mes--;
        }

        _dif = modulo(_dia);
        (cantDiasMes(_mes,_anio))+1; //+1 por el 0
        _dia =

    }

    return fechaAux; //Devuelvo el valor actual
}
*/
Fecha Fecha:: operator ++(int) //postincremento
{
    Fecha fechaAux(*this);

    if(_dia == 31) //30 no puedo meter
    {
        if(_mes == 12)
        {
            _anio++;
            _mes = 1;

        }
        else
        {
            _mes++;
        }

        _dia = 0;

    }
    else if(_dia == 30 && _mes != 12)
    {
        _mes++;
        _dia = 0;
    }

    if(_mes == 2)
    {
        if((_dia == 29 && esBisiesto(_anio)) || (_dia == 28 && !esBisiesto(_anio)))
        {
            _dia = 0;
            _mes = 3;
        }

    }

    _dia++; // todo va acá si no son los meses border -> bisiesto

    return fechaAux;
}

Fecha Fecha:: operator --(int)//postdecremento
{
    Fecha fechaAux(*this);

    if(_dia == 1)
    {
        if(_mes == 1)
        {
            _mes = 12;
            _anio--;
        }
        else
        {
            _mes--;
        }

        _dia = cantDiasMes(_mes,_anio);
    }
    else
    {
        _dia--;
    }

    return fechaAux;
}

Fecha Fecha::operator ++() //preincremento
{
    if(_dia == 31) //30 no puedo meter
    {
        if(_mes == 12)
        {
            _anio++;
            _mes = 1;

        }
        else
        {
            _mes++;
        }

        _dia = 0;

    }
    else if(_dia == 30 && _mes != 12)
    {
        _mes++;
        _dia = 0;
    }

    if(_mes == 2)
    {
        if((_dia == 29 && esBisiesto(_anio)) || (_dia == 28 && !esBisiesto(_anio)))
        {
            _dia = 0;
            _mes = 3;
        }

    }

    _dia++;

    return *this;
}


Fecha Fecha:: operator --()//predecremento
{
    if(_dia == 1)
    {
        if(_mes == 1)
        {
            _mes = 12;
            _anio--;
        }
        else
        {
            _mes--;
        }

        _dia = cantDiasMes(_mes,_anio);
    }
    else
    {
        _dia--;
    }

    return *this;
}


ostream& operator<<(ostream& sal,const Fecha& obj)
{
    return sal << obj._dia<< '/' << obj._mes << '/' << obj._anio;

}


Fecha::~Fecha()
{
    //dtor
}
