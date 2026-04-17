#include <iostream>
#include <iomanip>
using namespace std;

class Reloj {
private:
    int minutosTotales;
    void normalizar() {
        minutosTotales %= (24 * 60);
        if (minutosTotales < 0)
            minutosTotales += 24 * 60;
    }
public:
    Reloj(int horas, int minutos) {
        minutosTotales = horas * 60 + minutos;
        normalizar();
    }
    void agregarMinutos(int minutos) {
        minutosTotales += minutos;
        normalizar();
    }
    void restarMinutos(int minutos) {
        minutosTotales -= minutos;
        normalizar();
    }
    bool esIgual(const Reloj& otro) const {
        return this->minutosTotales == otro.minutosTotales;
    }
    void mostrar() const {
        int horas = minutosTotales / 60;
        int minutos = minutosTotales % 60;
        cout << setfill('0') << setw(2) << horas << ":"
             << setfill('0') << setw(2) << minutos << endl;
    }
};
int main() {
    Reloj r1(10, 30);
    Reloj r2(9, 90); 
    cout << "Reloj 1: ";
    r1.mostrar();
    cout << "Reloj 2: ";
    r2.mostrar();

    if (r1.esIgual(r2)) {
        cout << "Los relojes son iguales" << endl;
    } else {
        cout << "Los relojes son diferentes" << endl;
    }
    r1.agregarMinutos(40);
    cout << "Reloj 1 después de sumar 40 min: ";
    r1.mostrar();

    r1.restarMinutos(100);
    cout << "Reloj 1 después de restar 100 min: ";
    r1.mostrar();
    return 0;
}
