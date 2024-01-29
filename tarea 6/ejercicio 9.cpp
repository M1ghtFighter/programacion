#include <iostream>
#include <vector>
using namespace std;

struct Estudiante {
    string nombre;
    int numCalificaciones;
    vector<float> calificaciones;
};

int main() {
    int numEstudiantes;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    vector<Estudiante> estudiantes(numEstudiantes);

    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "\nIngrese la informacion para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        cout << "Ingrese el numero de calificaciones para " << estudiantes[i].nombre << ": ";
        cin >> estudiantes[i].numCalificaciones;

        estudiantes[i].calificaciones.resize(estudiantes[i].numCalificaciones);
        cout << "Ingrese las calificaciones para " << estudiantes[i].nombre << ":\n";
        for (int j = 0; j < estudiantes[i].numCalificaciones; ++j) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    cout << "\nPromedio de calificaciones para cada estudiante:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        float sumaCalificaciones = 0.0;
        for (int j = 0; j < estudiantes[i].numCalificaciones; ++j) {
            sumaCalificaciones += estudiantes[i].calificaciones[j];
        }
        float promedio = sumaCalificaciones / estudiantes[i].numCalificaciones;
        cout << "Estudiante: " << estudiantes[i].nombre << "\n";
        cout << "Promedio de calificaciones: " << promedio << "\n\n";
    }

    return 0;
}
