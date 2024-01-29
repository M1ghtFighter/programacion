#include <iostream>
using namespace std;

void print(int n) {
    cout << "By Value: " << n << endl;
}

int main() {
    int n = 10;
    print(n); 

    cout << "After function call: " << n << endl;
    return 0;
}