#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, digitos = 0;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;

    // Contar digitos
    while (original != 0) {
        original = original / 10;
        digitos++;
    }

    original = numero;

    // Calcular suma
    while (original != 0) {
        int digito = original % 10;
        suma += pow(digito, digitos);
        original = original / 10;
    }

    if (suma == numero)
        cout << numero << " es un numero Armstrong" << endl;
    else
        cout << numero << " no es un numero Armstrong" << endl;

    return 0;
}