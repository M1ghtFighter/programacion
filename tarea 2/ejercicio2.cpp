#include <iostream>
#include <string>
using namespace std;

// Función que verifica si una palabra es un palíndromo
bool esPalindromo(string palabra) {
    int i = 0;
    int j = palabra.length() - 1;

    // Comparar los caracteres en la palabra de izquierda a derecha y de derecha a izquierda
    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;
        }
        i++;
        j--;
    }

    // Si la función no ha devuelto false hasta ahora, la palabra es un palíndromo
    return true;
}

int main() {
    string palabra;

    // Solicitar al usuario que ingrese una palabra
    cout << "enter a word: ";
    cin >> palabra;

    // Llamar a la función esPalindromo para determinar si la palabra ingresada es un palíndromo
    if (esPalindromo(palabra)) {
        cout << "the entered word is a palindrome." << endl;
    } else {
        cout << "the word entered is not a palindrome." << endl;
    }

    return 0;
}