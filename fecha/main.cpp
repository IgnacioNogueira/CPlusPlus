#include "Fecha.h"

int main()
{

    //Fecha fechaActual;
    Fecha fecha1(15, 7, 2021);
    Fecha fecha2(30, 2, 2021); // Fecha inválida
    Fecha fecha3(30, 4, 2021);
    Fecha fecha4(31, 12, 2021);
    Fecha fecha5(1, 1, 2022);
    Fecha fecha6(1, 3, 1988); //bisiesto
    Fecha fecha7(1, 3, 2021); //no bisiesto
    Fecha fecha9(1, 1, 2022);

    cout << "Dias postsumados +1:" <<endl;

    fecha1++; // 16, 7, 2021
    fecha3++; // 1,5,2021
    fecha4++; // 1,1,2022

    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 3:" << fecha3 <<endl;
    cout << "Fecha 4:" << fecha4 <<endl;
    cout <<endl;

    cout << "Dias postdecrementados -1:" <<endl;

    fecha1--; // 15, 7, 2021
    fecha5--; // 31,12,2021
    fecha6--; // 29,2,1988
    fecha7--; // 28,2,2021

    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 5:" << fecha5 <<endl;
    cout << "Fecha 6:" << fecha6 <<endl;
    cout << "Fecha 7:" << fecha7 <<endl;
    cout <<endl;

    cout << "Dias predecrementados -1:" <<endl;

    --fecha1; // 14, 7, 2021
    --fecha5; // 30,12,2021
    --fecha6; // 28,2,1988
    --fecha7; // 27,2,2021

    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 5:" << fecha5 <<endl;
    cout << "Fecha 6:" << fecha6 <<endl;
    cout << "Fecha 7:" << fecha7 <<endl;
    cout <<endl;

    cout << "Dias presumados +1:" <<endl;

    ++fecha1; // 15, 7, 2021
    ++fecha5; // 31,12,2021
    ++fecha6; // 29,2,1988
    ++fecha7; // 28,2,2021

    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 5:" << fecha5 <<endl;
    cout << "Fecha 6:" << fecha6 <<endl;
    cout << "Fecha 7:" << fecha7 <<endl;

    bool comparacion1 = fecha1 == fecha3;
    bool comparacion2 = fecha4 == fecha9;
    Fecha fecha45(1,2,2022);
    Fecha fecha46(2,2,2022);
    bool comparacion3 = fecha4 != fecha9;
    bool comparacion4 = fecha45 != fecha46;
    /*
    bool comparacion5 = fecha1 < fecha5;
    bool comparacion6 = fecha5 < fecha1;
    bool comparacion7 = fecha7 > fecha6;
    bool comparacion8 = fecha6 > fecha7;
*/
    cout <<endl;
    cout << "1- El resultado de la comparacion de igualdad es: " << comparacion1 << endl;
    cout << "2- El resultado de la comparacion de igualdad es: " << comparacion2 << endl;
    cout << "3- El resultado de la desigualdad es: " << comparacion3 << endl;
    cout << "4- El resultado de la desigualdad es: " << comparacion4 << endl;

    /*cout << "5- El resultado es menor: " << comparacion5 << endl;
    cout << "6- El resultado es menor: " << comparacion6 << endl;
    cout << "7- El resultado es mayor: " << comparacion7 << endl;
    cout << "8- El resultado es mayor: " << comparacion8 << endl;
    */cout <<endl;

    cout << "Dias +=4:" <<endl;

    Fecha fecha10(29, 2, 2020); //caso limite bisiesto
    fecha10+=4; //4/3/2020
    Fecha fecha11(28, 2, 2021); //caso limite no bisiesto
    fecha11+=4; //4/3/2021
    fecha1 += 4; // 19,7,2021
    fecha5 += 4; //04,01,2022
    Fecha fecha12(29, 2, 2020);
    fecha12 += 29; //29,03,2020
    Fecha fecha13(29, 2, 2020);
    fecha13 += 60; //29,04,2020


    cout << "Fecha 10:" << fecha10 <<endl;
    cout << "Fecha 11:" << fecha11 <<endl;
    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 5:" << fecha5 <<endl;
    cout << "Fecha 12:" << fecha12 <<endl;
    cout << "Fecha 13:" << fecha13 <<endl;
    cout <<endl;

    cout << "Dias -=4:" <<endl;


    fecha10-=4; //29/2/2020
    fecha11-=4; //28/2/2021
    fecha1 -=4; // 15,7,2021
    fecha5 -=4; //31,12,2022
    fecha12 -=29; //29,2,2020
    fecha13 -=60; //29/2/2020


    cout << "Fecha 10:" << fecha10 <<endl;
    cout << "Fecha 11:" << fecha11 <<endl;
    cout << "Fecha 1:" << fecha1 <<endl;
    cout << "Fecha 5:" << fecha5 <<endl;
    cout << "Fecha 12:" << fecha12 <<endl;
    cout << "Fecha 13:" << fecha13 <<endl;
    cout <<endl;

    //cin >> fecha8;
    //cout << fecha8;

    return 0;
}
