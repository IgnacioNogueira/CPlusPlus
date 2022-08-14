#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>

class Boolean
{
    private:    int _valor = 0;

    public:
        /* No hay que agregar constructores de más, sino va a estar mal */
        //Boolean(); //tengo que dejar uno por defecto
        //Boolean(int x); // y agregar los que se vayan usando. PEROOOO (MIRAR ABAJO)

        Boolean(int x = 0); //(2)// Para usar UN SOLO constructor, podés poner x= 0 -> si lo recibe, lo recibe, sino queda por defecto x = 0

                              /* El constructor por defecto se podría ir,
                                 ya que estás solventando dos casos.
                                 Para agarrar valores por defecto, podés poner DE DERECHA A IZQ, el valor por defecto, o sea -> 0
                                 y X va a ser el parametro que puede ser uno que se espera que se ingrese
                                */
        virtual ~Boolean();

        Boolean _and(const Boolean &x) const;
        Boolean _not() const;
        Boolean _or(const Boolean &x) const;
        int getValue() const;

};

#endif // BOOLEAN_H
