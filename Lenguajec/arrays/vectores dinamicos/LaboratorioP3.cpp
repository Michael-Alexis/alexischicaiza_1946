#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

struct Estudiante
{
    int id;
    string nombre;
    float nota1;
    float nota2;
    float promedio;
    char categoria;
    float z;
};

float calcularMedia(const vector<Estudiante> &estudiantes)
{
    float suma = 0;
    for (const auto &est : estudiantes)
    {
        suma += est.promedio;
    }
    return estudiantes.empty() ? 0 : suma / estudiantes.size();
}

float calcularDesviacionEstandar(const vector<Estudiante> &estudiantes, float media)
{
    if (estudiantes.empty())
        return 0;
    float suma = 0;
    for (const auto &est : estudiantes)
    {
        suma += pow(est.promedio - media, 2);
    }
    return sqrt(suma / estudiantes.size());
}

float calcularZ(float promedio, float media, float desviacion)
{
    return desviacion == 0 ? 0 : (promedio - media) / desviacion;
}

char calcularCategoria(float z)
{
    if (z >= 1)
        return 'A';
    if (z >= 0)
        return 'B';
    if (z >= -1)
        return 'C';
    if (z >= -2)
        return 'D';
    return 'E';
}

void actualizarCategorias(vector<Estudiante> &estudiantes)
{
    float media = calcularMedia(estudiantes);
    float desviacion = calcularDesviacionEstandar(estudiantes, media);
    for (auto &est : estudiantes)
    {
        est.z = calcularZ(est.promedio, media, desviacion);
        est.categoria = calcularCategoria(est.z);
    }
}

void mostrarLista(const vector<Estudiante> &estudiantes)
{
    system("cls");
    if (estudiantes.empty())
    {
        cout << "No hay estudiantes registrados.\n";
        return;
    }
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << setw(5) << "ID" << setw(25) << "Nombre" << setw(10) << "Nota1"
         << setw(10) << "Nota2" << setw(12) << "Promedio" << setw(12) << "Z" << setw(12) << "Categoria\n";
    cout << "------------------------------------------------------------------------------------------------\n";
    for (const auto &est : estudiantes)
    {
        cout << setw(5) << est.id
             << setw(25) << est.nombre.substr(0, 24)
             << setw(10) << est.nota1
             << setw(10) << est.nota2
             << setw(12) << est.promedio
             << setw(12) << fixed << setprecision(2) << est.z
             << setw(12) << est.categoria << "\n";
    }
}

void anadirEstudiante(vector<Estudiante> &estudiantes, int &id)
{
    system("cls");
    Estudiante est;
    est.id = id;
    cout << "\nAnadir Estudiante:\n";
    cout << "Ingrese Nombre: ";
    cin.ignore();
    getline(cin, est.nombre);
    do
    {
        cout << "Ingrese Nota 1: ";
        cin >> est.nota1;
        if (est.nota1 < 1 || est.nota1 > 20)
        {
            cout << "Las calificaciones deben tener un puntaje entre 1 y 20" << endl;
        }
    } while (est.nota1 < 1 || est.nota1 > 20);
    do
    {
        cout << "Ingrese Nota 2: ";
        cin >> est.nota2;
        if (est.nota1 < 1 || est.nota1 > 20)
        {
            cout << "Las calificaciones deben tener un puntaje entre 1 y 20" << endl;
        }
    } while (est.nota2 < 1 || est.nota2 > 20);
    est.promedio = (est.nota1 + est.nota2) / 2;
    estudiantes.push_back(est);
    actualizarCategorias(estudiantes);
    id++;
    cout << "\nEstudiante anadido con exito.\n";
}

void modificarEstudiantes(vector<Estudiante> &estudiantes)
{
    int idModificar;
    cout << "Ingrese el ID del estudiante a modificar: ";
    cin >> idModificar;

    for (auto est : estudiantes)
    {
        if (est.id == idModificar)
        {
            int opcion;
            cout << "¿Qué desea modificar?\n";
            cout << "1. Nombre\n";
            cout << "2. Notas\n";
            cout << "3. Nombre y Notas\n";
            cout << "Seleccione una opción: ";
            cin >> opcion;
            cin.ignore(); // Limpiar buffer

            if (opcion == 1 || opcion == 3)
            {
                cout << "Ingrese el nuevo nombre: ";
                getline(cin, est.nombre);
            }

            if (opcion == 2 || opcion == 3)
            {
                int subOpcion;
                cout << "¿Qué nota desea modificar?\n";
                cout << "1. Nota 1\n";
                cout << "2. Nota 2\n";
                cout << "3. Ambas\n";
                cout << "Seleccione una opción: ";
                cin >> subOpcion;

                if (subOpcion == 1 || subOpcion == 3)
                {
                    do
                    {
                        cout << "Ingrese la nueva Nota 1: ";
                        cin >> est.nota1;
                        if (est.nota1 < 1 || est.nota1 > 20)
                        {
                            cout << "Las calificaciones deben estar entre 1 y 20.\n";
                        }
                    } while (est.nota1 < 1 || est.nota1 > 20);
                }

                if (subOpcion == 2 || subOpcion == 3)
                {
                    do
                    {
                        cout << "Ingrese la nueva Nota 2: ";
                        cin >> est.nota2;
                        if (est.nota2 < 1 || est.nota2 > 20)
                        {
                            cout << "Las calificaciones deben estar entre 1 y 20.\n";
                        }
                    } while (est.nota2 < 1 || est.nota2 > 20);
                }

                est.promedio = (est.nota1 + est.nota2) / 2;
            }

            actualizarCategorias(estudiantes);
            cout << "Estudiante modificado correctamente.\n";
            return;
        }
    }

    cout << "ID no encontrado. No se realizó ninguna modificación.\n";
}

void eliminarEstudiante(vector<Estudiante> &estudiantes)
{
    system("cls");
    if (estudiantes.empty())
    {
        cout << "No hay estudiantes para eliminar.\n";
        return;
    }
    mostrarLista(estudiantes);
    int idEliminar;
    cout << "\nIngrese el ID del estudiante a eliminar: ";
    cin >> idEliminar;
    for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it)
    {
        if (it->id == idEliminar)
        {
            estudiantes.erase(it);
            actualizarCategorias(estudiantes);
            cout << "Estudiante eliminado correctamente.\n";
            return;
        }
    }
    cout << "ID no encontrado. No se elimino ningun estudiante.\n";
}

void mostrarMenu()
{
    cout << "\n----------------------\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Mostrar lista de estudiantes\n";
    cout << "2. Anadir estudiante\n";
    cout << "3. Modificar por ID\n";
    cout << "4. Eliminar estudiante\n";
    cout << "5. Salir\n";
    cout << "----------------------\n";
}

void menuPrincipal()
{
    int id = 1;
    vector<Estudiante> estudiantes;
    int op;
    bool bandera = true;
    while (bandera)
    {
        system("cls");
        mostrarMenu();
        cin >> op;
        switch (op)
        {
        case 1:
            mostrarLista(estudiantes);
            break;
        case 2:
            anadirEstudiante(estudiantes, id);
            break;
        case 3:
            modificarEstudiantes(estudiantes);
            break;
        case 4:
            eliminarEstudiante(estudiantes);
            break;
        case 5:
            bandera = false;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente.\n";
        }
        system("pause");
    }
}

int main()
{
    menuPrincipal();
    return 0;
}