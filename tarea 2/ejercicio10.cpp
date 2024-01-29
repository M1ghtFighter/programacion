#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> count_vowels(string sentence) {
    vector<int> vowels(5, 0);
    for (char c : sentence) {
        char lower_c = tolower(c);
        if (lower_c == 'a') {
            vowels[0]++;
        } else if (lower_c == 'e') {
            vowels[1]++;
        } else if (lower_c == 'i') {
            vowels[2]++;
        } else if (lower_c == 'o') {
            vowels[3]++;
        } else if (lower_c == 'u') {
            vowels[4]++;
        }
    }
    return vowels;
}

int main() {
    string sentence;
    cout << "Ingrese una oración: ";
    getline(cin, sentence);

    vector<int> vowels = count_vowels(sentence);
    cout << "Cantidad de vocales en la oración: " << endl;
    cout << "a: " << vowels[0] << endl;
    cout << "e: " << vowels[1] << endl;
    cout << "i: " << vowels[2] << endl;
    cout << "o: " << vowels[3] << endl;
    cout << "u: " << vowels[4] << endl;

    return 0;
}