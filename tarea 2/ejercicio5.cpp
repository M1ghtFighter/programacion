#include <iostream>
#include <string>
using namespace std;
// Función para cifrar una cadena utilizando el cifrado César
string cifradoCesar(const string& cadena, int clave) {
    string resultado = "";

    for (char caracter : cadena) {
        if (isalpha(caracter)) {  
            char inicio = isupper(caracter) ? 'A' : 'a';
            resultado += (caracter - inicio + clave) % 26 + inicio;
        } else {
            resultado += caracter;  
        }
    }

    return resultado;
}

int main() {
    string cadena;
    int clave;

    // Solicitar al usuario ingresar una cadena y una clave
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Ingrese la clave (numero entero): ";
    cin >> clave;

    // Cifrar la cadena utilizando el cifrado César
    string resultadoCifrado = cifradoCesar(cadena, clave);

    // Mostrar el resultado cifrado
    cout << "Cadena cifrada: " << resultadoCifrado << endl;

    return 0;
}
