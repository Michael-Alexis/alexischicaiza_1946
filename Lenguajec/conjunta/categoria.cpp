#include <iostream>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        v[i]=rand()%20+1;
    }
}
void verVector(int vector[],int tamano){
for(int i=0;i<tamano;i++){
    cout<<"El elemento "<<i+1<<"del vector es : "<<vector[i]<<endl;
    if(vector[i]>=1 && vector[i]<=5){
        cout<<"Deficiente"<<vector[i];
    }else if(vector[i]>=6 && vector[i]<=10){
        cout<<"regular"<<vector[i];
    } else if(vector[i]>=1 && vector[i]<=5){
        
    }
}
}

void 
main(){
    int ne;
    cout<<"Cunatos elementos tiene el vector? : ";
    cin>>ne;
int vector[ne];
llenarVector(vector,ne);
verVector(vector,ne);
}