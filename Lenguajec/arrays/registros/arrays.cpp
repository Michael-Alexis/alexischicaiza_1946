#include <iostream>
#include<iomanip>
using namespace std;
struct estudiante{
    int id;
    string nombres;
    float notap; 
};
int main(int argc, char const *argv[])
{
    int ne;
    float suma=0, promedio=0;
    bool ordena=true;
    cout<<"Ingese la cantidad de estudiantes que deseas ingresar: ";
    cin>>ne;
    estudiante estudiantes[ne],aux;
    for(int i=0;i<ne;i++){
        cout<<"Ingrese el id del estudiante ";
        cin>>estudiantes[i].id;
        cout<<"Ingrese el nombre del estudiante ";
        cin.ignore();
        getline(cin,estudiantes[i].nombres);
        cout<<"Ingrese la nota del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].notap;
    }
    cout<<"Datos del estudiante "<<endl;
    cout<<setw(5)<<"id"<<setw(10)<<"nombre"<<setw(20)<<"nota"<<endl;
    for(int i=0;i<ne;i++){
        cout<<setw(3);
        cout<<estudiantes[i].id<<setw(12);
        cout<<estudiantes[i].nombres<<setw(15);
        cout<<estudiantes[i].notap<<endl;
        suma+=estudiantes[i].notap;
    }
    cout<<"Promedio de notas: "<<(float)suma/ne<<endl;
    cout<<"Listado de estudinates de mayor a menor nota"<<endl;
    
    for(int i=0;i<ne-1;i++){
        ordena=false;
        for(int j=0;j<ne;j++){
            if(estudiantes[j].notap<estudiantes[j+1].notap){
                aux=estudiantes[j+1];
                estudiantes[j+1]=estudiantes[j];
                estudiantes[j]=aux;
                ordena=true;
            }
        }
    }
    cout<<"Datos del estudiante "<<endl;
    cout<<setw(5)<<"id"<<setw(10)<<"nombre"<<setw(20)<<"nota"<<endl;
    for(int i=0;i<ne;i++){
        cout<<setw(3);
        cout<<estudiantes[i].id<<setw(12);
        cout<<estudiantes[i].nombres<<setw(15);
        cout<<estudiantes[i].notap<<endl;
        suma+=estudiantes[i].notap;
    }
    return 0;
}
