#include <iostream>
using namespace std;
struct Car {
    string brand;
    int speed;
};

void increaseSpeed(Car car) {
    car.speed += 10;
}

int main() {
    Car myCar = {"Toyota", 100};
    cout << "Before: " << myCar.speed << " km/h" << std::endl;
    increaseSpeed(myCar);
    cout << "After: " << myCar.speed << " km/h" << endl;
    return 0;
}