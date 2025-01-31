#include <iostream>
using namespace std;
int usuario(int v){
    int op;
    cout<<"Selecciones cualquiera de las opciones"<<endl;
    cout<<"1.- Piedra "<<endl;
    cout<<"2.-Papel"<<endl;
    cout<<"3.-Tijera"<<endl;
    cin>>op;
    return op;

}
int computadora(int v){
    srand(time(NULL));
    v= (rand()%2)+1;
    return v;
}
void ganador(int usu, int compu){
 if(compu==1)
        cout<<"\n¡Tu ordenador ha seleccionado Piedra!\n";
    else if(compu==2)
        cout<<"\n¡Tu ordenador ha seleccionado Papel!\n";
    else if(compu==3)
        cout<<"\n¡Tu ordenador ha seleccionado Tijera!\n";

    //Determinamos al ganador de la contienda
    if(usu==2&&compu==1)
        cout<<"\nGanaste\n";
    else if(usu==3&&compu==2)
        cout<<"\nGanaste\n";
    else if(usu==1&&compu==3)
        cout<<"\nGanaste\n";
    else if(usu==compu)
        cout<<"\nGanaste\n";
    else
       cout<<"\nperdite\n";


}
main(){
    int di,compu,usu;
    cout<<"SELECCIONE EL NIVEL DE DIFICULTAD"<<endl;

    cout<<"1.-Facil"<<endl;
    cout<<"2.-Intermedio"<<endl;
    cout<<"3.-Dificil"<<endl;
    cin>>di;
    usu=usuario(di);
    compu=computadora(di);
    ganador(usu,compu);

}