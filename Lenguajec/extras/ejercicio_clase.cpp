#include<iostream>
using namespace std;
main (){
    int inf,sup,n,suma;
    bool bandera=true;
    while (true)
    {
        cout<<"Ingrese limite inferiro:";
        cin>>inf;
        cout<<"Ingrese limite superior:";
        cin>>sup;
        if(inf>sup){
            cout<<"Rango no valido";  
            break;
        }else
        cout<<"Ingrese un numero:";
        cin>>n;
        while (true)
        {
             if(n >=inf && n <=sup){
                suma=suma+n;
             }else{
                break;
             }

        }
        //if(numero >=1 && numero <=5)
    }
}