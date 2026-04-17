#include <iostream>
#include <cmath>
using namespace std;

// Función para convertir posición tipo "c5" a coordenadas (fila, columna)
void convertir(string pos, int &fila, int &columna) {
    columna = pos[0] - 'a';   // 'a' -> 0, 'b' -> 1, ..., 'h' -> 7
    fila = pos[1] - '1';      // '1' -> 0, '2' -> 1, ..., '8' -> 7
}

// Función que verifica si las reinas se atacan
bool puedenAtacar(int r1, int c1, int r2, int c2) {
    if (r1 == r2) return true; // misma fila
    if (c1 == c2) return true; // misma columna
    if (abs(r1 - r2) == abs(c1 - c2)) return true; // diagonal
    return false;
}

int main() {
    string reinaBlanca, reinaNegra;

    cout << "Ingrese la posicion de la reina blanca (ej: c5): ";
    cin >> reinaBlanca;

    cout << "Ingrese la posicion de la reina negra (ej: f2): ";
    cin >> reinaNegra;

    int r1, c1, r2, c2;

    convertir(reinaBlanca, r1, c1);
    convertir(reinaNegra, r2, c2);

    if (puedenAtacar(r1, c1, r2, c2)) {
        cout << "SI, las reinas pueden atacarse" << endl;
    } else {
        cout << "NO, las reinas NO pueden atacarse" << endl;
    }

    return 0;
}