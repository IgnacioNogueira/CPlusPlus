#ifndef A_H
#define A_H

#include "base.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class A:public Base
{
    public:

        void hola()
        {
            cout << "hola 2" <<endl;
        }

        A();
        virtual ~A();

    protected:

    private:
};

#endif // A_H
