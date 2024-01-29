#include <iostream>
using namespace std;
int main() {

    int filasA, columnasA, filasB, columnasB;
    cout << "Ingrese el numero de la primera filas para la matriz: ";
    cin >> filasA;
    cout << "Ingrese el numero de la primera columnas para la matriz: ";
    cin >> columnasA;

    cout << "Ingrese el numero de la segunda filas para la matriz: ";
    cin >> filasB;
    cout << "Ingrese el numero de la segunda columnas para la matriz: ";
    cin >> columnasB;

    if (columnasA != filasB) {
        cout << "No se pueden multiplicar las matrices. Las dimensiones no son validas." << endl;
        return 1;
    }

    int matrizA[filasA][columnasA];
    int matrizB[filasB][columnasB];
    int matrizC[filasA][columnasB];

    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < filasB; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << "Ingrese el elemento B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            matrizC[i][j] = 0;
        }
    }
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            for (int k = 0; k < columnasA; ++k) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    cout << "Matriz resultante C:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}