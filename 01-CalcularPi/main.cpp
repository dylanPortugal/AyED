#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    double pi_ejercicio = 0.0;
    double pi = 3.141592;
    int iteraciones = 0;

    while (true) {
        double termino = 4.0 / (2 * iteraciones+ 1);

        if (iteraciones % 2 == 0) {
            pi_ejercicio += termino;
        } else {
            pi_ejercicio -= termino;
        }
        iteraciones++;

        if (fabs(pi - pi_ejercicio) < 0.0000001) {
            break;
        }
    }
    
    cout.precision(6);
    cout << "Valor aproximado de pi: " << fixed << pi_ejercicio << endl;

    return 0;
}
    