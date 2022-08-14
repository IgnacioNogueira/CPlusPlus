#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
using namespace std;

class Complejo
{
    private:
        int _real;
        int _imag;

    public:
        Complejo();
        Complejo(int real,int imaginario);

        Complejo operator +(const Complejo &obj);
        Complejo& operator =(const Complejo& obj);
        friend Complejo operator *(const Complejo &obj1,const Complejo &obj2);
        friend Complejo operator *(const int esc,const Complejo &obj);


        friend ostream& operator << (ostream& sal,const Complejo &obj);

        virtual ~Complejo();


};

#endif // COMPLEJO_H
