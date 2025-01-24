#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
       v[i]=rand()%20+1;
       //cin>>v[i];
    }
}
void verDatos(int v[], int ne){
    cout<<"Los elemenetos del vector son: "<<endl;
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" "<<endl;
    }
}
int ordenarBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
    }
        return contador;
}
int ordenarBurbujav2(int v[], int n){
    int aux, contador=0;
    int variable=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
        }
        variable++;
    }
        return contador;
}
int ordenarBurbujav3(int v[], int n){
    int aux, contador=0;
    int variable=1;
    bool activador=true;
    for(int i=0;i<n && activador;i++){
        for(int j=0;j<n-variable;j++){
            contador++;
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                    activador=false;
                }
        }
        variable++;
    }
        return contador;
}
void mejor(int a ,int b,int c){
if( a == b && a==c ){
cout << "Todos son iguales" << endl;
}else if(a<=b && a<=c ){
 cout << "El número v1 " <<a<<" es mayor"<<endl;
}else if(b<=a && b<=c){
cout << "El numero v2 " <<b<<" es mayor"<<endl;
}else if (c<=a && c<=b){
cout << "El número de la v3 " <<c<<" es mayot"<<endl;
}
}
int main(){
int ne,v1,v2,v3;
cout << "Número de elementos :";
cin >> ne;
int ve[ne];
llenarVector(ve,ne);

v1=ordenarBurbujav1(ve,ne);
v2=ordenarBurbujav2(ve,ne);
v3=ordenarBurbujav3(ve,ne);

cout << "El número de comparaciones :" <<v1<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v2<<endl;
verDatos(ve,ne);
cout << "El número de comparaciones :" <<v3<<endl;
verDatos(ve,ne);
mejor(v1,v2,v3);
}
