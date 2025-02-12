#include<iostream>
using namespace std;
int main()
{
    string nombres="pedro";
    string apellido("Perez");
    string inicial (1,'P');
    string cadena="Juan Jose Arturo";
    string nombre2(cadena,0,8);
    cout<<"La longitud de nombres es: "<<nombre2.length()<<endl;
    inicial +="edro";
    cout <<inicial[0]<<endl;
    cout <<inicial<<endl;
    inicial="cad";
    cout <<inicial<<endl;
    cout <<nombre2<<endl;
    return 0;
}
