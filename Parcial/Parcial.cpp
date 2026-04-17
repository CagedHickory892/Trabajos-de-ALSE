#include <iostream>
#include <vector>

using namespace std;

struct Point {
    double x;
    double y;
};

Point calcularCentroide(const vector<Point>& puntos) {
    Point centroide;
    centroide.x = 0;
    centroide.y = 0;

    for (const auto& p : puntos) {
        centroide.x += p.x;
        centroide.y += p.y;
    }

    centroide.x /= puntos.size();
    centroide.y /= puntos.size();

    return centroide;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    vector<Point> puntos(n);

    for (int i = 0; i < n; i++) {
        cout << "Punto " << i + 1 << " (x y): ";
        cin >> puntos[i].x >> puntos[i].y;
    }

    Point resultado = calcularCentroide(puntos);

    cout << "\nCentroide calculado:" << endl;
    cout << "X: " << resultado.x << endl;
    cout << "Y: " << resultado.y << endl;

    return 0;
}