#include "Boolean.h"
using namespace std;

/*

Desarrollar una clase que simule el comportamiento
de tipo de dato bool (el cual tiene 2 valores (true y false),
sin utilizar el tipo bool de C++

*/
int main()
{

    Boolean falseBoolean,
            trueBoolean(1); //true - Ejemplo A

    Boolean resultFalseAndTrue = falseBoolean._and(trueBoolean);
    Boolean resultTrueOrTrue = trueBoolean._or(trueBoolean);
    Boolean resultNotFalse = falseBoolean._not();

    cout << "resultFalseAndTrue:" << resultFalseAndTrue.getValue() << endl;
    cout << "resultTrueOrTrue  :" << resultTrueOrTrue.getValue() << endl;
    cout << "resultNotFalse    :" << resultNotFalse.getValue() << endl;
    return 0;
}
