#include "Pila.h"

char sumarValores(char v1,char v2, unsigned char *carry)
{
    char res = v1 + v2 - '0' + *carry;

    if(res > '9')
    {
        *carry = 1;
        res-=10;
    }
    else
    {
        *carry = 0;
    }

    return res;
}

void valoresRestantes(stack<char> &st,unsigned char *carry,stack<char> &stR)
{
    char valor;
    char resultado;

    while(!st.empty())
    {
        valor = st.top();
        st.pop();
        resultado = sumarValores(valor,'0',carry); //le sumo un 0 en los valores restantes
        stR.push(resultado);
    }
}


void sumar(const string & a,const string & b, string & r)
{
    stack<char> stack1;
    stack<char> stack2;
    stack<char> stack3;
    char suma;
    unsigned char carry = 0;
    char v1,v2;

    for(string::size_type i = 0; i < a.size(); ++i)
    {
        stack1.push(a[i]);
    }

    for(string::size_type j = 0; j < b.size(); ++j)
    {
        stack2.push(b[j]);
    }

    ///

    while(!stack1.empty() && !stack2.empty())
    {
        v1 = stack1.top(); //9999
        stack1.pop();        v2 = stack2.top();//0001
        stack2.pop();

        suma = sumarValores(v1,v2,&carry);
        stack3.push(suma);
    }

    valoresRestantes(stack1,&carry,stack3);
    valoresRestantes(stack2,&carry,stack3);

    if(carry == 1)
    {
        carry = '1';
        stack3.push(carry);
    }

    /// 9999
    /// 0001
    // 10000

    //string r = '10

    while(!stack3.empty())
    {
        r.push_back(stack3.top());
        stack3.pop();
    }

    //r.push_back('\0'); no hace falta porque es string

    cout << "- El resultado de la suma es: " << r << endl;
    cout << endl;

    if(stack1.empty())
    {
        cout << "+ Pila 1 vacia " << endl;
    }

    if(stack2.empty())
    {
        cout << "+ Pila 2 vacia " << endl;
    }

    if(stack3.empty())
    {
        cout << "+ Pila 3 vacia " << endl;
    }

}
