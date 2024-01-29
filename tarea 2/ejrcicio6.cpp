#include <iostream>
#include <string>
using namespace std;

int main() {
    int respuestasCorrectas = 0;

    // Pregunta 1
    string respuesta;
    cout << "Which it is the capital of Italy? ";
    cin >> respuesta;
    if (respuesta == "Roma") respuestasCorrectas++;

    // Pregunta 2
    cout << "¿How many sides does a square have? ";
    cin >> respuesta;
    if (respuesta == "4") respuestasCorrectas++;

    // Pregunta 3
    cout << "¿How many days are there in a week? ";
    cin >> respuesta;
    if (respuesta == "7") respuestasCorrectas++;

    // Mostrar resultados
    cout << "\nResult:" << endl;
    cout << "correct answers: " << respuestasCorrectas << endl;
    cout << "wrong answers: " << 3 - respuestasCorrectas << endl;
    return 0;
}
