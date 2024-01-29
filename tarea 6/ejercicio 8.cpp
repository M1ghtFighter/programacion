#include <iostream>
#include <vector>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
};

int main() {
    int numLibros;

    cout << "Ingrese el numero de libros: ";
    cin >> numLibros;

    vector<Libro> libros(numLibros);
    for (int i = 0; i < numLibros; ++i) {
        cout << "\nIngrese la informacion para el libro " << i + 1 << ":\n";
        cout << "Titulo: ";
        cin.ignore();
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Anio de publicacion: ";
        cin >> libros[i].anioPublicacion;
    }

    cout << "\nInformacion de todos los libros:\n";
    for (int i = 0; i < numLibros; ++i) {
        cout << "Libro " << i + 1 << ":\n";
        cout << "Titulo: " << libros[i].titulo << "\n";
        cout << "Autor: " << libros[i].autor << "\n";
        cout << "Anio de publicacion: " << libros[i].anioPublicacion << "\n\n";
    }
    return 0;
}
