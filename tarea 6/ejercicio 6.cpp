#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

    int filas, columnas;
    cout << "Ingrese el numero de filas para la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas para la matriz: ";
    cin >> columnas;

    vector<vector<string>> matriz(filas, vector<string>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese palabras para la celda [" << i << "][" << j << "]: ";
            cin.ignore(); 
            getline(cin, matriz[i][j]);
        }
    }

    vector<string> resultados(filas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultados[i] += matriz[i][j] + " ";
        }
    }

    cout << "Resultados:" <<endl;
    for (int i = 0; i < filas; ++i) {
        cout << "Fila " << i << ": " << resultados[i] <<endl;
    }
    return 0;
}
