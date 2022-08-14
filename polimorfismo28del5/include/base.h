#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Base:
{
    private:

    public:
        void hola() override
        {
            cout << "Hola desde A" << endl;
        }
        Base();
        virtual ~Base();

    protected:

};

#endif // BASE_H
