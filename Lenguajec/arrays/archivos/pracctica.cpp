#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Venta {
    string producto;
    int cantidad;
    float precio;
    string sucursal;
};

void leerDatos(vector<Venta>& ventas) {
    ifstream archivo("empresa.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo de datos." << endl;
        exit(1);
    }
    
    string encabezado;
    getline(archivo, encabezado); 
    
    Venta venta;
    while (archivo >> venta.producto >> venta.cantidad >> venta.precio >> venta.sucursal) {
        ventas.push_back(venta);
    }
    archivo.close();
}

void procesarDatos(const vector<Venta>& ventas, vector<int>& totalArticulos, int& cantidadSur, int& cantidadTecladoNorte,
                   vector<float>& recaudacionSucursal, float& recaudacionTotal, int& sucursalMayor) {
    
    totalArticulos.clear();
    recaudacionSucursal = {0, 0, 0, 0};
    recaudacionTotal = 0;
    cantidadSur = 0;
    cantidadTecladoNorte = 0;
    
    for (const auto& venta : ventas) {
        totalArticulos.push_back(venta.cantidad);
        
        if (venta.sucursal == "Sur") cantidadSur += venta.cantidad;
        if (venta.producto == "Teclado" && venta.sucursal == "Norte") cantidadTecladoNorte += venta.cantidad;
        
        if (venta.sucursal == "Norte") recaudacionSucursal[0] += venta.cantidad * venta.precio;
        else if (venta.sucursal == "Sur") recaudacionSucursal[1] += venta.cantidad * venta.precio;
        
        recaudacionTotal += venta.cantidad * venta.precio;
    }
    
    sucursalMayor = (recaudacionSucursal[0] > recaudacionSucursal[1]) ? 0 : 1;
}

void guardarResultados(const vector<int>& totalArticulos, int cantidadSur, int cantidadTecladoNorte,
                       const vector<float>& recaudacionSucursal, float recaudacionTotal, int sucursalMayor) {
    ofstream archivo("consolidado.txt");
    archivo << "Cantidad total de cada artículo:" << endl;
    for (size_t i = 0; i < totalArticulos.size(); i++) {
        archivo << "Artículo " << i + 1 << ": " << totalArticulos[i] << endl;
    }
    
    archivo << "\nCantidad de artículos en la sucursal Sur: " << cantidadSur << endl;
    archivo << "Cantidad del artículo Teclado en la sucursal Norte: " << cantidadTecladoNorte << endl;
    archivo << "\nRecaudación total de cada sucursal:" << endl;
    archivo << "Norte: " << recaudacionSucursal[0] << endl;
    archivo << "Sur: " << recaudacionSucursal[1] << endl;
    
    archivo << "\nRecaudación total de la empresa: " << recaudacionTotal << endl;
    archivo << "Sucursal con mayor recaudación: " << (sucursalMayor == 0 ? "Norte" : "Sur") << endl;
    archivo.close();
}

int main() {
    vector<Venta> ventas;
    vector<int> totalArticulos;
    vector<float> recaudacionSucursal;
    int cantidadSur, cantidadTecladoNorte, sucursalMayor;
    float recaudacionTotal;
    
    leerDatos(ventas);
    procesarDatos(ventas, totalArticulos, cantidadSur, cantidadTecladoNorte, recaudacionSucursal, recaudacionTotal, sucursalMayor);
    guardarResultados(totalArticulos, cantidadSur, cantidadTecladoNorte, recaudacionSucursal, recaudacionTotal, sucursalMayor);
    
    cout << "Resultados guardados en consolidado.txt" << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>  // Para formateo de decimales

using namespace std;

void guardarResultados(const vector<int>& totalArticulos, int cantidadSur, int cantidadTecladoNorte,
    const vector<float>& recaudacionSucursal, float recaudacionTotal, int sucursalMayor) {
    
    ofstream archivo("consolidado.txt");
    
    if (!archivo) {  // Verifica si el archivo se abrió correctamente
        cerr << "Error al abrir el archivo consolidado.txt para escribir." << endl;
        return;
    }

    archivo << "===== Resultados Consolidados =====" << endl;

    // Cantidad total de cada artículo
    archivo << "\nCantidad total de cada artículo:" << endl;
    if (!totalArticulos.empty()) {
        for (size_t i = 0; i < totalArticulos.size(); i++) {
            archivo << "Artículo " << i + 1 << ": " << totalArticulos[i] << " unidades" << endl;
        }
    } else {
        archivo << "No hay datos de artículos disponibles." << endl;
    }

    // Cantidad de artículos vendidos en la sucursal Sur
    archivo << "\nCantidad de artículos vendidos en la sucursal Sur: " << cantidadSur << endl;

    // Cantidad de teclados vendidos en la sucursal Norte
    archivo << "Cantidad de teclados vendidos en la sucursal Norte: " << cantidadTecladoNorte << endl;

    // Recaudación total por sucursal
    archivo << "\n===== Recaudación por sucursal =====" << endl;
    archivo << fixed << setprecision(2);  // Formatear valores monetarios con 2 decimales
    archivo << "Norte: $" << recaudacionSucursal[0] << endl;
    archivo << "Sur: $" << recaudacionSucursal[1] << endl;

    // Recaudación total de la empresa
    archivo << "\nRecaudación total de la empresa: $" << recaudacionTotal << endl;

    // Determinar la sucursal con mayor recaudación
    archivo << "Sucursal con mayor recaudación: " << (sucursalMayor == 0 ? "Norte" : "Sur") << endl;

    archivo.close();
    cout << "Resultados guardados en consolidado.txt correctamente." << endl;
}
