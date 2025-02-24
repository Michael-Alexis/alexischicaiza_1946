#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> numeros(10);
    for(int i=0;i<10;i++){
        numeros.push_back(i+1);
    }
    cout<<"Elementos del vector: ";
    for(auto x:numeros){
        cout<<x<<" ";
    }
    cout<<"\nTamano de vector: "<<numeros.size()<<endl;
    numeros.erase(numeros.begin()+3,numeros.begin()+6);
    cout<<"Elementos del vector: ";
    for(auto x:numeros){
        cout<<x<<" ";
    }
    cout<<"\nTamano de vector: "<<numeros.size()<<endl;
    return 0;
}
