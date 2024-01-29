#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int N = 10;
    vector<int> numeros;
    double total,promedio ;
   

    // Solicitar al usuario ingresar 10 números enteros
    cout << "Enter " << N << " integer numbers:" << endl;
    for (int i = 0; i < N; ++i) {
        int m;
        cin >> m;
        numeros.push_back(m);
        total = total + m;
    }

    // Calcular el promedio
    promedio = (total) / N;
    cout << "the average of the numbers entered is: " << promedio << endl;

    // Mostrar los números mayores que el promedio
    cout << "numbers greater than average: ";
    for (int i = 0; i < N; ++i) {
        if (numeros[i] > promedio) {
            cout << numeros[i] << " ";
        }
    }
    cout << endl;

    return 0;
}