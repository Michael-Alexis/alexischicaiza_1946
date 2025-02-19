#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ahorcado.h"

using namespace std;

string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    return palabras[rand() % 5];
}

int opciones() {
    int op;
    cout << "1. Deportes\n2. Animales\n3. Frutas\nSeleccione una categoría: ";
    cin >> op;
    return op;
}

void jugar() {
    string palabras[5], palabra, oculta;
    int intentos = 0, maxIntentos = 7;
    char letra;
    bool acierto;

    int op = opciones();
    if (op == 1) deportes(palabras);
    else if (op == 2) animales(palabras);
    else frutas(palabras);

    palabra = palabraAleatoria(palabras);
    oculta = string(palabra.length(), 'X');  

    while (intentos < maxIntentos) {
        acierto = false;
        cout << "\nAdivine la palabra: " << oculta << "\nIntentos restantes: " << (maxIntentos - intentos) << endl;
        mostrarAhorcado(intentos);
        cout << "Ingrese una letra: ";
        cin >> letra;

        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                oculta[i] = letra;
                acierto = true;
            }
        }

        if (!acierto) intentos++;

        if (oculta == palabra) {
            cout << "¡Felicidades! Usted adivinó la palabra.\n";
            break;
        }
    }

    if (intentos == maxIntentos) {
        cout << "Perdiste. La palabra era: " << palabra << endl;
        mostrarAhorcado(intentos);
    }

    string respuesta;
    cout << "Desea jugar otra vez? (s/n): ";
    cin >> respuesta;
    if (respuesta == "s") jugar();
}

int main() {
    cout << "¡Bienvenido al juego del ahorcado!\n";
    jugar();
    return 0;
}