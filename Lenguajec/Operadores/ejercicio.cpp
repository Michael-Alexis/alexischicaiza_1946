#include<iostream>
using namespace std;
main(){
    //operadores relacionales
    int a = 5,b = 10;
    bool c = true, d = false;
    /*
    cout<<"a > b: "<<(a > b)<<endl;
    cout<<"a < b: "<<(a < b)<<endl;
    cout<<"a >= b: "<<(a >= b)<<endl;
    cout<<"a <= b: "<<(a <= b)<<endl;
    cout<<"a == b "<<(a == b)<<endl;
    cout<<"a != b: "<<(a != b)<<endl;*/
    //operadores logicos
    cout<<"c && d: "<<(c && d)<<boolalpha<<endl;
    cout<<"c || d: "<<(c || d)<<boolalpha<<endl;
    cout<<" !c: "<<!c<<endl;
    cout<<" !d: "<<boolalpha<<!d<<endl;
    cout<<"c && !d "<<boolalpha<<(c && !d)<<endl;
    cout<<"c || !d: "<<boolalpha<<(c || !d)<<endl;
}