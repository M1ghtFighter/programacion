/*3-Matriz Transpuesta: Crea un programa que solicite al usuario ingresar los elementos
de una matriz cuadrada. Luego, calcula la matriz transpuesta e imprímela en la pantalla*/
#include <iostream>
using namespace std;
int main() {
    int tamano;

    // Solicitar al usuario ingresar el tamaño de la matriz cuadrada
    cout << "Enter the size of the square matrix: ";
    cin >> tamano;

    if (tamano <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    // Declarar e inicializar la matriz cuadrada con ceros
    int matriz[100][100] = {0};

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Enter the elements of the square matrix:" << endl;
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la matriz transpuesta
    int transpuesta[100][100];

    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz original
    cout << "\nMatriz Original:" << endl;
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Imprimir la matriz transpuesta
    std::cout << "\nMatriz Transposed:" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


