#include<iostream>
//Alexis Chicazia
using namespace std;
main(){
    int n1,n2,n3,aux;
    cout<<"ingrese n1";
    cin>> n1;
    cout<<"ingrese n2";
    cin>> n2;
    cout<<"ingrese n3";
    cin>> n3;
    cout<<"lista numeros  sin desplazar:"<<endl;
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
    aux=n1;
    n1=n2;
    n2=n3;
    n3=aux;
    cout<<"lista numeros desplazados:"<<endl;
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
}