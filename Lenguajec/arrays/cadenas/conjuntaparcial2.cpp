#include <iostream>
using namespace std;
void llenaVector(int vector[],int tamano){
    for(int i=0;i<tamano;i++){
        cout<<"Introduce el valor del elemento"<<i+1<<":";
        cin>>vector[i];
    }
}
void verVector(int vector[],int tamano){
for(int i=0;i<tamano;i++){
    cout<<"El elemento "<<i+1<<"del vector es : "<<vector[i]<<endl;
}
}
main(){
    int ne;
    cout<<"Cunatos elementos tiene el vector? : ";
    cin>>ne;
int vector[ne];
llenaVector(vector,ne);
verVector(vector,ne);
}