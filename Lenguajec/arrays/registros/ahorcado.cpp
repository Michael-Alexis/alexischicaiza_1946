#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "ahorcado.h"
using namespace std;
string palabraaleatoria(string palabras[]){
    srand(time(NULL));
    int numero = rand()%5;
    return palabras[numero];
}
int opciones(){
    int op;
    cout<<"1. Deportes"<<endl;
    cout<<"2. Animales"<<endl;
    cout<<"3. Frutas"<<endl;
    cin>>op;
    return op;
}
void jugar(){
    string palabras[5],palabraSeleccionada,oculta;
    int op;
    int intentos = 0, maxIntentos = 7;
    bool acierto;
    char letra;
    cout<<"Seleccione una categoria"<<endl;
    op = opciones();
    (op == 1) ? deportes(palabras) : (op == 2) ? animales(palabras) : frutas(palabras);
    palabraSeleccionada = palabraaleatoria(palabras);
    cout<<palabraSeleccionada<<endl;
    oculta = string(palabraSeleccionada.length(), 'X');
    cout<<oculta<<endl;
    while (intentos < maxIntentos)
    {
        acierto = false;
        cout << "\nAdivine la palabra: " << oculta << "\nIntentos restantes: " << (maxIntentos - intentos) << endl;
        mostrarAhorcado(intentos);
        cout << "Ingrese una letra: ";
        cin >> letra;
        for (int i = 0; i < palabraSeleccionada.length(); i++) {
            if (palabraSeleccionada[i] == letra) {
                oculta[i] = letra;
                acierto = true;
            }
        }
        if (!acierto) intentos++;
        if (oculta == palabraSeleccionada) {
            cout << "¡Felicidades! Usted adivino la palabra era: \n"<<palabraSeleccionada<<endl;
            break;
        }
        if (intentos == maxIntentos) {
            cout << "Perdiste. La palabra era: " << palabraSeleccionada<< endl;
            mostrarAhorcado(intentos);
        }
    } 
    string respuesta;
    cout << "Desea jugar otra vez? (s/n): ";
    cin >> respuesta;
    if (respuesta == "s") jugar();
}
int main() {
    cout<<"Bienvenido al juego del ahorcado"<<endl;
    cout<<"----------------------------------"<<endl;
    jugar();
    return 0;
}