#ifndef B_H
#define B_H

#include "base.h"
#include "a.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


class B:public A
{
    public:
        B();
        virtual ~B();

    protected:

    private:
};

#endif // B_H
