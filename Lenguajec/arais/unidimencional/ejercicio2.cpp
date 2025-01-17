#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenaDatos(int v[], int ne){
    srand(time(NULL));
    for(int i=0;i<ne;i++){
        v[i]=rand()%20+1;
    }

}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" ";
    }

}
float sumaPromedioCifras(int v[], int ne){
    int suma=0;
    for(int i=0;i<ne;i++){
        suma+=v[i];
    }
    return(float)suma/ne;
}
int contarDebajoPromedio(int v[], int ne,float promedio){
    int contar=0;
    for(int i=0;i<ne;i++){
        if(v[i]<promedio){
              contar++;
        }
    }
    return contar;
}
void guardarElementosMenores(int v[],int ne,float promedio, int lista[]){
    int j=0;
    for (int i=0;i<ne;i++){
        if(v[i]<promedio){
            lista[j]=v[i];
            j++;
        }
    }
}
main(){
    int ne,menores;
    float promedioNumeros;
    cout<<"Cuantos elementos tiene el vector?: ";
    cin>>ne;
    int vector[ne];
    llenaDatos(vector,ne);
    verDatos(vector,ne);
    promedioNumeros=sumaPromedioCifras(vector,ne);
    cout<<"\nEl promedio de los numeros generados es= "<<promedioNumeros<<endl;
    menores =contarDebajoPromedio(vector,ne,promedioNumeros);
    cout<<"\nLa cantidad de elementos debajo del promedio son:  "<<menores<<endl;
    int listaMenore[menores];
    guardarElementosMenores(vector,ne,promedioNumeros,listaMenore);
    verDatos(listaMenore,menores);
}