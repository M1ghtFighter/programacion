#include <iostream>
#include <vector>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float calificacion;
};

int main() {
    int numEstudiantes;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    vector<Alumno> estudiantes(numEstudiantes);
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "\nIngrese la informacion para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Calificacion: ";
        cin >> estudiantes[i].calificacion;
    }

    cout << "\nInformacion de todos los estudiantes:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << "\n";
        cout << "Edad: " << estudiantes[i].edad << "\n";
        cout << "Calificacion: " << estudiantes[i].calificacion << "\n\n";
    }
    return 0;
}
