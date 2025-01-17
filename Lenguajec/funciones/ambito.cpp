#include <iostream>
using namespace std;
float gravedad=9.8;
void funcion1(int a){
    float gravedad =10.8;
    cout<<"Gravedad de la funcion1: "<<gravedad<<endl;
    cout<<"Gravedad global: "<<::gravedad<<endl;
    cout<<"A: "<<a<<endl;
}
void funcion2(float x){
   cout<<"Gravedad de loa funcion 2: "<<gravedad<<endl;
cout<<"X: "<<x<<endl;
}
main(){
    int num1=10;
    float num2=20.5;
    {
        char letra ='A';
        cout<<"Letra"<<letra<<endl;
    }
    cout<<"Gravedad: "<<gravedad<<endl;
    funcion1(num1);
    funcion2(num2);
}