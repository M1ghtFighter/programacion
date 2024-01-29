#include <iostream>
using namespace std;
struct Car {
    string brand;
    int speed;
};

void printBrand(const Car& car) {
    cout << "Brand: " << car.brand << endl;
}

int main() {
    Car myCar = {"Toyota", 100};
    printBrand(myCar);
    return 0;
}