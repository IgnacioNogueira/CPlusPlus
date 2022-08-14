#ifndef FIGURA2D_H
#define FIGURA2D_H

using namespace std;

class Figura2D
{
    /*
        A virtual function is a member function
        in the base class that we expect to redefine
        in derived classes.
    */

    public:
        Figura2D();
        virtual ~Figura2D();

        virtual double perimetro() const = 0;
        virtual double area() const = 0;

    protected:

    private:
};

#endif // FIGURA2D_H
