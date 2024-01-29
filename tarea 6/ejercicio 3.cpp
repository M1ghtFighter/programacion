#include <iostream>
using namespace std;

int main() {

    char vector[50];
    int contador = 0;
    char caracter;
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(vector, 50);
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    for (int i = 0; vector[i] != '\0'; i++) {
        if (vector[i] == caracter) {
            contador++;
        }
    }
    cout << "El caracter '" << caracter << "' aparece " << contador << " veces en la cadena." << endl;
    return 0;
}