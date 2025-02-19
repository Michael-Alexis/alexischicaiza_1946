#include <iostream>
using namespace std;
void deportes(string deportes[]){
    string deportesx[5] = {"futbol", "tenis", "natacion", "baloncesto", "atletismo"};
    for(int i = 0; i < 5; i++){
        deportes[i] = deportesx[i];
    }
    cout<<deportes[0]<<endl;
}
void animales(string animales[]){
    string animalesx[5] = {"perro", "gato", "pez", "tigre", "leon"};
    for (int i = 0; i < 5; i++)
    {
        animales[i] = animalesx[i];
    }
    
}
void frutas(string frutas[]){
    string frutasx[5] = {"manzana", "pera", "platano", "uva", "fresa"};
    for (int i = 0; i < 5; i++)
    {
        frutas[i] = frutasx[i];
    }
}
void mostrarAhorcado(int intentos) {
    string dibujo[] = {
        "  \n  \n  \n",
        "  O\n  \n  \n",
        "  O\n  |\n  \n",
        "  O\n /|\\\n  \n",
        "  O\n /|\\\n  |\n",
        "  O\n /|\\\n  |\n / \\\n",
        "  O\n /|\\\n  |\n / \\\n(Colgado)\n"
    };
    cout << dibujo[intentos] << endl;
}