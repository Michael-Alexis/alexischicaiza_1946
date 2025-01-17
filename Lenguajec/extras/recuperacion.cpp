#include <iostream>
using namespace std;
main()
{
    int n1,n2,result;
    char op;
    cout << "Ingres n1: ";
    cin >> n1;
    cout << "Ingres n2: ";
    cin >> n2;
    cout << "Ingres caracter de la operaciones vasicas (+,-,*,/): ";
    cin >> op;
    switch (op)
    {
    case '+':
        result=n1+n2;
        cout << "Es resultado de la suma es = " <<result<< endl;
        break;
    case '-':
        result=n1-n2;
        cout << "Es resultado de la resta  es = " <<result<< endl;
        break;
    case '*':
        result=n1*n2;
        cout << "Es resultado de la multiplicacion es = " <<result<< endl;
        break;
    case '/':
        if (n2!=0){
            result=n1/n2;
            cout << "Es resultado de la divicion es = " <<result<< endl;
            break;
            
        }else{
            cout<<"NO EXITE DIVICION PARA 0";
            break;
        }
    default:
        cout << "Instruccion no valida" << endl;
    }
}