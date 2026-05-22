#include <iostream>
using namespace std;

bool esPalindromo(int x) {
    if (x < 0) return false;

    int original = x;
    long invertido = 0;

    while (x != 0) {
        invertido = invertido * 10 + x % 10;
        x /= 10;
    }

    return original == invertido;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPalindromo(numero))
        cout << "Es palindromo" << endl;
    else
        cout << "No es palindromo" << endl;

    return 0;
}
    