#include <iostream>
#include <vector>
using namespace std;
int main() {

    int filas, columnas;
    cout << "Ingrese el numero de filas para las matrices: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas para las matrices: ";
    cin >> columnas;

    vector<vector<int>> matrizA(filas, vector<int>(columnas));
    vector<vector<int>> matrizB(filas, vector<int>(columnas));

    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    vector<vector<int>> matrizC(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << "Matriz resultante C (suma de A y B):" << endl;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

