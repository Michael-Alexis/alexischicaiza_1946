#include<iostream>
#include<stdio.h>
using namespace std;
main(){
int num,r,divi;
cout<<"Ingrese un numero:";
cin >> num;
cout<<"Ingrese el numero divisible:";
cin >> divi;
r= num % divi;
if(r==0){
    cout << "El numero "<<num<<" es multiplo de: "<<divi <<endl;
    //printf("el numero %d es divisbles por %d\n",num,divi);
}else{
    cout << "El numero "<<num<<" no es multiplo de: "<<divi <<endl;
}
num=0;
}