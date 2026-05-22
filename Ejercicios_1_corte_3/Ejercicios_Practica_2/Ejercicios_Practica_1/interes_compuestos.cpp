#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, t;
    int n;

    cout << "Ingrese el capital inicial (P): ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual (decimal, ej: 0.05): ";
    cin >> r;

    cout << "Ingrese el numero de veces que se capitaliza al ano (n): ";
    cin >> n;

    cout << "Ingrese el numero de anos (t): ";
    cin >> t;

    double A = P * pow((1 + r/n), n*t);

    cout << "El monto final es: " << A << endl;

    return 0;
}
