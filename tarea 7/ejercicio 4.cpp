#include <iostream>
using namespace std;
void addFive(int& num) {
    num += 5;
}

 main() {
    int myNum = 10;
    cout << "Before: " << myNum <<endl;
    addFive(myNum);
    cout << "After: " << myNum <<endl; // La variable ahora es 15.
    return 0;
}