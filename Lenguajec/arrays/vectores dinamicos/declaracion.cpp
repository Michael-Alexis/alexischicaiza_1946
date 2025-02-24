#include <iostream>
#include<vector>
using namespace std;
void cambiarElementos(vector<int> &num){
    num[0]=100;
}
int main(int argc, char const *argv[])
{
    vector<int> datos, datos1;
    int numeros [10],valores[10];
    vector <float> notas(3,4.5);// inicializa con 3 elementos de valor 4.5
    datos.push_back(10);
    datos.push_back(20);
    datos.push_back(30);
    datos.push_back(40);
    datos.push_back(50);
    for(int i=0;i<datos.size();i++){
        cout<<datos[i]<<" ";
    }
    cout<<endl;
    for(auto x:datos){
        cout<<x<<" ";
    }
    cout<<"\n";
    for(auto y:notas){
        cout<<y<<" ";
    }
    datos1=datos;
    cout<<"\n";
    for (auto z:datos1){
        cout<<z<<" ";
    }
    datos.erase(datos.begin()+2,datos.begin()+4);
    cout<<"\n Nuevos elementos de datos:";
    for(auto x:datos){
        cout<<x<<" ";
    }
    datos.erase(datos.begin()+1,datos.begin()+2);
    cout<<"\n Nuevos elementos de datos:";
    for(auto x:datos){
        cout<<x<<" ";
    }
    cout<<"\nInsertar elementos entre\n";
    datos.insert(datos.begin()+1,80);
    for(auto x:datos){
        cout<<x<<" ";
    }
    cout<<"\nInsertado valores en una posicion n veces"<<endl;
    datos.insert(datos.begin()+2,3,23);
    for(auto x:datos){
        cout<<x<<" ";
    }
    cambiarElementos(datos);
    cout<<"\nElementos del vector despues de llamar a la funcion: ";
    for(auto x:datos){
        cout<<x<<" ";
    }
    datos.pop_back();
    cout<<"\nElementos del vector despues de llamar a la funcion pop_back: ";
    for(auto x:datos){
        cout<<x<<" ";
    }
    cout<<datos.empty();
    return 0;
}
