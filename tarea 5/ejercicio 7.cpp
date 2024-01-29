#include <iostream>
using namespace std;

int main() {
    double val = 1000.0;
    do {
        val = val / 5;
        cout << '*';
    } while(val > 1.0);
    return 0;
}