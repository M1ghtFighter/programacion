#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

    int numPalabras;
    cout << "Ingrese el numero de palabras: ";
    cin >> numPalabras;

    vector<string> palabras;
    cout << "Ingrese las palabras una por una:\n";
    for (int i = 0; i < numPalabras; ++i) {
        string palabra;
        cout << "Palabra " << (i + 1) << ": ";
        cin >> palabra;
        palabras.push_back(palabra);
    }
    string resultado;
    for (const string& palabra : palabras) {
        resultado += palabra + " ";
    }
    cout << "\nCadena resultante:\n" << resultado << endl;
    return 0;
}
