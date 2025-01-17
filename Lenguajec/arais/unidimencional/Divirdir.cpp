#include<iostream>
using namespace std;
int divicion(int a, int b, int c){
    if(b==0)
    return -1;
  if(a<b)
  return a;
  else{
    c++;
     return divicion(a-b,b,c);
  }
}
int main(){
    int a,b,c=0,d=0;
    cout<<"introduce el dividendo";
    cin>>a;
     cout<<"introduce el divisor";
    cin>>b;
    d=divicion(a,b,c);
    cout<<"El reciduo :"<<c<<endl;
    cout<<"introduce el cociente:"<<d<<endl;


}