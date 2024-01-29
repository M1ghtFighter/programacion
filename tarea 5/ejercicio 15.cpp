#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 5; i++) {
        cout << "mesa: " << i << endl;
    }

    int j = 1;
    while (j <= 5) {
        cout << "carro: " << j << endl;
        j++;
    }

    
    int k = 1;
    do {
        cout << "libro: " << k << endl;
        k++;
    } while (k <= 5);

    return 0;
}