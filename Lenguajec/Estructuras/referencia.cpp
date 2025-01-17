#include <iostream>
using namespace std;
void operaciones(float num1, float num2, float &suma, float &resta, float &multiplicacion, float &divicion, int &resultado ){
 suma = num1+num2;
 resta=num1-num2;
 multiplicacion= num1 * num2;
 divicion =num1/num2;
 resultado=(int)num1 % (int)num2;
}
main(){
    float a, b, suma, resta, multiplicacion, divicion;
    int residuo;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    operaciones(a, b, suma, resta, multiplicacion, divicion, residuo);
    cout<<"La suma de los numeros son: "<<suma<<endl;
    cout<<"La resta de los numeros son: "<<resta<<endl;
    cout<<"La multiplicacion de los numeros son: "<<multiplicacion<<endl;
    cout<<"La divicion de los numeros son: "<<divicion<<endl;
    cout<<"La residuo de los numeros son: "<<residuo<<endl;

}