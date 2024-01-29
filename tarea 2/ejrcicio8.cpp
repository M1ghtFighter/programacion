#include <iostream>
#include <vector>
using namespace std;
int find_largest_element(vector<int> numbers) {
    int largest = numbers[0];
    for (int number : numbers) {
        if (number > largest) {
            largest = number;
            break;
        }
    }
    return largest;
}

int main() {
    vector<int> numbers = {12, 23, 3, 5, 76, 45, 8, 11, 99, 200};
    int largest = find_largest_element(numbers);
    cout << "El mayor elemento en el vector es: " << largest << std::endl;
    return 0;
}