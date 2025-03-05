#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct Venta
{
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
    int id; 

    while (archivo >> id >> venta.producto >> venta.cantidad >> venta.precio >> venta.sucursal) {
        ventas.push_back(venta);
    }

    archivo.close();
}

void resulDatos(const vector<Venta>& ventas, vector<int>& tAr, int& cantS, int& cantN,vector<float>& rSucursal, float& recaudacionTotal, int& sucursal ) {

tAr.clear();
rSucursal = {0, 0, 0, 0};
recaudacionTotal = 0;
cantS = 0;
cantN = 0;

for (auto& venta : ventas) {
    tAr.push_back(venta.cantidad);

if (venta.sucursal == "Sur") cantS += venta.cantidad;
if (venta.producto == "Teclado" && venta.sucursal == "Norte") cantN += venta.cantidad;

if (venta.sucursal == "Norte") rSucursal[0] += venta.cantidad * venta.precio;
else if (venta.sucursal == "Sur") rSucursal[1] += venta.cantidad * venta.precio;

recaudacionTotal += venta.cantidad * venta.precio;
}

sucursal = (rSucursal[0] > rSucursal[1]) ? 0 : 1;
}

void guardarResultados(const vector<int>& tAr, int cantS, int cantN, const vector<float>& recaudacionSucursal, float recaudacionTotal, int sucursalMayor) {
ofstream archivo("consolidado.txt");
archivo << "Cantidad total de cada artículo:" << endl;
for (int i = 0; i < tAr.size(); i++) {
archivo << "Artículo " << i + 1 << ": " << tAr[i] << endl;
}

archivo << "\nCantidad de artículos en la sucursal Sur: " << cantS << endl;
archivo << "Cantidad del artículo Teclado en la sucursal Norte: " << cantN << endl;
archivo << "\nRecaudación total de cada sucursal:" << endl;
archivo << "Norte: " << recaudacionSucursal[0] << endl;
archivo << "Sur: " << recaudacionSucursal[1] << endl;

archivo << "\nRecaudación total de la empresa: " << recaudacionTotal << endl;
archivo << "Sucursal con mayor recaudación: " << (sucursalMayor == 0 ? "Norte" : "Sur") << endl;
archivo.close();
}

int main()
{
    vector<Venta> ventas;
    vector<int> tAr;
    vector<float> rSucursal;
    int cantS, cantN, sucursal;
    float recaudacionTotal;
    
    leerDatos(ventas);
    resulDatos(ventas, tAr, cantS, cantN, rSucursal, recaudacionTotal, sucursal);
    guardarResultados(tAr, cantS, cantN, rSucursal, recaudacionTotal, sucursal);
    
    cout << "Resultados guardados en consolidado.txt" << endl;
    return 0;
}