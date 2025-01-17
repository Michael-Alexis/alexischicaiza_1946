#include <iostream>
using namespace std;
main(){
    int n1,n2,resultado;
    bool operacion;
    cout<<"Ingresar un numero:";
    cin>>n1;
    cout<<"Ingrese un numero: ";
    cin>>n2;
    cout<<"letra Forma:"<<endl;
    (n1>n2)?cout<<n1<<"Es mayor que"<<n2:cout<<n2<<"es amyor que "<<n1;
    cout<<endl;
    cout<<"2da Forma:"<<endl;
    resultado=(n1>n2)?n1/n2:n1%n2;
    cout<<"El resultado es: "<<resultado<<endl;
    operacion=(n1>n2)?true:false;
    if(operacion)
     cout<<"El resultado guarda la divicion de "<<n1<<"entre"<<n2<<endl;
    else
    cout<<"El resultado guardado el modulo de "<<n1<<"entre"<<n2<<endl;
}
