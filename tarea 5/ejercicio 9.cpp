#include <iostream>
using namespace std;
int main() {
    float val = -20.0;
    while (val < 100.0) {
        if (val < 0 && -val >= 40)
            break;
        cout << "*";
        val = -val * 2;
    }
    return 0;
}