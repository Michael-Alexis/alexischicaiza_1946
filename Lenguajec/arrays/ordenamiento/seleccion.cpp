#include<iostream>
 using namespace std;
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<"\t";
    }
}
void llenarVector(int v[],int n){
    srand(time(NULL));

    for(int i=0;i<n;i++){
        //v[i]=rand()%11;
       cin>>v[i];
    }
} 
int ordenarseleccion(int v[],int n){
    int contar=0,aux;
    bool cambio=true;
    for (int i = 0; i < n-1 && cambio; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            contar++;
            if (v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
            
        }
        
    }
    return contar;
}
 main(){
        int ne ,comparaciones;
    cout<<"Numero de elementos: ";
    cin>>ne;
int vec[ne];
llenarVector(vec,ne);
cout<<"vector original: \n";
verDatos(vec,ne);
comparaciones = ordenarseleccion(vec,ne);
cout<<"\nvector ordenado: ";
verDatos(vec,ne);
cout<<" \n El numero de comparaciones:"<<comparaciones;
 }

 