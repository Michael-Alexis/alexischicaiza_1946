#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void generarDatos(int t[][50],int tam){
srand(time(NULL));
for (int i=0;i<tam;i++){
 for(int j=0;j<tam;j++){
  t[i][j]=(rand()%11+10);
 }
}
}
void imprimirDatos(int t[][50],int tam){
for (int i=0;i<tam;i++){
 for(int j=0;j<tam;j++){
  cout<<"|" <<t[i][j]<<"\t";
 }
 cout << "|" << endl;
}
}
int sumaDiagonalp(int t[][50],int tam){
int suma=0;
for (int i=0;i<tam;i++){
 for(int j=0;j<tam;j++){
  if (i==j){
  suma=suma+t[i][j];
  }
 }
}
return suma;
}
int sumaDiagonals(int t[][50],int tam){
int suma=0;
for (int i=0;i<tam;i++){
 for(int j=0;j<tam;j++){
  if (i+j==tam-1){
  suma=suma+t[i][j];
  }
 }
}
return suma;
}
void comparacion(int a,int b){
if (a>b){
cout << "La suma de la diagonal principal es mayor"<<endl;
}else if(a=b){
cout << "La suma de la diagonal secundaria es mayor"<<endl;
}else {
cout << "La sumas de las finales son iguales"<<endl;
}
}
void imprimirDiagonales(int t[][50],int tam){
for (int i=0;i<tam;i++){
 for(int j=0;j<tam;j++){
  if(i==j or i+j==tam-1){
  cout <<"|"<<t[i][j]<< "\t";
  }else{
  t[i][j]=0;
  cout <<"|"<<t[i][j]<< "\t";
  }
 }
 cout << "|" << endl;
}
}
int main(){
int tamano,tabla[50][50],dprincipal,dsecundaria;
cout << "Tamaño de la tabla " << endl;
cin >> tamano;
generarDatos(tabla,tamano);
imprimirDatos(tabla,tamano);
dprincipal=sumaDiagonalp(tabla,tamano);
dsecundaria=sumaDiagonals(tabla,tamano);
cout << "La suma de la diagonal principal es :" <<dprincipal<< endl;
cout << "La suma de la diagonal secundaria es :" <<dsecundaria<< endl;
comparacion(dprincipal,dsecundaria);
imprimirDiagonales(tabla,tamano);
}