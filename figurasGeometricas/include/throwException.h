#ifndef THROWEXCEPTION_H
#define THROWEXCEPTION_H

#include <string>
#include <iostream>
#include <exception>
using namespace std;

class ThrowException: public exception
{

public:

    const char * what() const throw()
    {
        return "No se pueden aplicar valores menores a 0";
    }

protected:

};

#endif // THROWEXCEPTION_H
