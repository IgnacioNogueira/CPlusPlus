#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <iostream>
#include <stack>
#include <string>
using namespace std;

char sumarValores(char v1,char v2, unsigned char *carry);
void valoresRestantes(stack<char> &st,unsigned char *carry,stack<char> &stR);
void sumar(const string & a,  const string & b, string & r);

#endif // PILA_H_INCLUDED
