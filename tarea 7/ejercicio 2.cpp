#include <iostream>
using namespace std;
void addFive(int num) {
    num += 5;
}

int main() {
    int myNum = 10;
    cout << "Before: " << myNum << endl;
    addFive(myNum);
    cout << "After: " << myNum << endl; // La variable myNum sigue siendo 10.
    return 0;
}