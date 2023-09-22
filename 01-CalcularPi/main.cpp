#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi_aproximado = 0.0;
    int denominador = 1;
    int iteraciones = 0;

    while (true) {
        double termino = 1.0 / denominador;

        if (iteraciones % 2 == 0) {
            pi_aproximado += termino;
        } else {
            pi_aproximado -= termino;
        }

        denominador += 2;
        iteraciones++;

        // Comprobar si hemos alcanzado los 6 decimales
        if (abs(M_PI - pi_aproximado) < 0.000001) {
            break;
        }
    }

    cout << "Valor aproximado de Pi: " << pi_aproximado << endl;
    return 0;
}