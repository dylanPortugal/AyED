#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    double pi_aproximado = 0.0;
    int iteraciones = 0;

    while (true) {
        double termino = 4.0 / (2 * iteraciones+ 1);

        if (iteraciones % 2 == 0) {
            pi_aproximado += termino;
        } else {
            pi_aproximado -= termino;
        }
        iteraciones++;

        if (fabs(3.141592 - pi_aproximado) < 0.0000001) {
            break;
        }
    }
    
    cout.precision(6);
    cout << "Valor aproximado de pi: " << fixed << pi_aproximado << endl;

    return 0;
}
    