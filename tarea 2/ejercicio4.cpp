#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario ingresar un número entero positivo
    cout << "Enter a positive integer: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "The number entered is not valid." << endl;
        return 1;
    }

    cout << "Collatz sequence for " << numero << ": ";

    while (numero != 1) {
        cout << numero << " ";

        // Aplicar reglas de la secuencia de Collatz
        if (numero % 2 == 0) {
            // Si el número es par, divídelo por 2
            numero /= 2;
        } else {
            // Si el número es impar, multiplícalo por 3 y suma 1
            numero = 3 * numero + 1;
        }
    }

    // Imprimir el último elemento de la secuencia (que es siempre 1)
    cout << numero << endl;

    return 0;
}