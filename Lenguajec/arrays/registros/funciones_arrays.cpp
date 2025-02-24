#include<iostream>
using namespace std;
struct persona{
    int id;
    string nombres;
    int edad;
    bool casado=false;
};
void ingresarRegistro(persona per[],int n){
  int i;
  char resp;
  for(i=0;i<n;i++){
    per[i].id=i+1;
    cout<<"Ingrese el nombre de la persona: ";
    cin>>per[i].nombres;    
    cout<<"Ingrese la edad de la persona: ";
    cin>>per[i].edad;
    cout<<"Es casado? <<S/N: ";
    cin.get(resp);
    cin.get(resp);
    if(resp=='S' || resp=='s'){
        per[i].casado=true;
    }
  }
}
void mostrarRegistro(persona per[],int n){
    int i;
    cout<<"ID \t Nombre \t Edad \t Casado"<<endl;
    for(i=0;i<n;i++){
        cout<<per[i].nombres<<"\t";
        cout<<per[i].edad<<"\t";
        cout<<per[i].casado<<"\t";
    }
}
int main(int argc, char const *argv[])
{
    int np;
    cout<<"Ingrese la cantidad de personas que desea ingresar: ";
    cin>>np;
    persona personas[np],encontrada;
    ingresarRegistro(personas,np);
    mostrarRegistro(personas,np);
    return 0;
}
