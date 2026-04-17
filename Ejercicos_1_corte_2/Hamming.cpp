#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena1, cadena2;
    int distancia = 0;

    cout << "Ingrese la primera cadena de ADN: ";
    cin >> cadena1;

    cout << "Ingrese la segunda cadena de ADN: ";
    cin >> cadena2;

    // Verificar que tengan la misma longitud
    if (cadena1.length() != cadena2.length()) {
        cout << "Error: Las cadenas deben tener la misma longitud." << endl;
        return 0;
    }

    // Comparar letra por letra
    for (int i = 0; i < cadena1.length(); i++) {
        if (cadena1[i] != cadena2[i]) {
            distancia++;
        }
    }

    cout << "La distancia de Hamming es: " << distancia << endl;

    return 0;
}