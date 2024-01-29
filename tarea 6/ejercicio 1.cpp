#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Enter " << n << " integer values:\n";
    for (int i = 0; i < n; ++i) {
        cout << "worth " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    sort(numeros.begin(), numeros.end());
    cout << "\nvector in ascending order:\n";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
