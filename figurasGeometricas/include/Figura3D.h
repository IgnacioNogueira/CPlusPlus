#ifndef FIGURA3D_H
#define FIGURA3D_H


class Figura3D
{
    public:
        Figura3D();
        virtual ~Figura3D();

        virtual double area() const = 0;
        virtual double volumen() const = 0;

    protected:

    private:
};

#endif // FIGURA3D_H
