#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vectorOriginal = {1, 2, 3, 2, 4, 5, 3, 6};

    // Mostrar el vector original
    cout << "Vector original: ";
    for (int num : vectorOriginal) {
        cout << num << " ";
    }
    cout << endl;

    // Eliminar elementos duplicados
    for (size_t i = 0; i < vectorOriginal.size(); ++i) {
        for (size_t j = i + 1; j < vectorOriginal.size(); ++j) {
            if (vectorOriginal[i] == vectorOriginal[j]) {
                // Elemento duplicado encontrado, eliminarlo
                for (size_t k = j; k < vectorOriginal.size() - 1; ++k) {
                    vectorOriginal[k] = vectorOriginal[k + 1];
                }
                vectorOriginal.pop_back();
                // Decrementar j para volver a verificar el elemento actual
                --j;
            }
        }
    }

    // Mostrar el vector después de eliminar duplicados
    cout << "Vector sin duplicados: ";
    for (int num : vectorOriginal) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
