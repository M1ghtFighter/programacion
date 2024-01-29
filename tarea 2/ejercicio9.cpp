#include <iostream>
#include <vector>
using namespace std;
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;
    // Solicitar al usuario dos números enteros
    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;
    cout << "Ingrese el numero de fin: ";
    cin >> fin;
    // Validar que el rango sea correcto
    if (inicio > fin) {
        cout << "Error: El numero de inicio debe ser menor o igual al numero de fin." << std::endl;
        return 1;  
    }

    vector<int> primos;
    // Generar vector con números primos en el rango dado
    for (int i = inicio; i <= fin; ++i) {
        if (!esPrimo(i)) {
            continue;
        }
        primos.push_back(i);
    }

    // Mostrar los números primos en el vector
    cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
