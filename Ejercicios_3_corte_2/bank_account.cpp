#include <iostream>
#include <mutex>
using namespace std;

class BankAccount {
private:
    int saldo;
    bool abierta;
    mutable mutex mtx;

public:
    BankAccount() : saldo(0), abierta(false) {}

    void abrir() {
        lock_guard<mutex> lock(mtx);
        if (abierta) throw runtime_error("La cuenta ya está abierta");
        saldo = 0;
        abierta = true;
    }

    void cerrar() {
        lock_guard<mutex> lock(mtx);
        if (!abierta) throw runtime_error("La cuenta no está abierta");
        abierta = false;
    }

    int obtenerSaldo() const {
        lock_guard<mutex> lock(mtx);
        if (!abierta) throw runtime_error("La cuenta no está abierta");
        return saldo;
    }

    void depositar(int cantidad) {
        lock_guard<mutex> lock(mtx);
        if (!abierta) throw runtime_error("La cuenta no está abierta");
        if (cantidad < 0) throw runtime_error("Cantidad negativa");
        saldo += cantidad;
    }

    void retirar(int cantidad) {
        lock_guard<mutex> lock(mtx);
        if (!abierta) throw runtime_error("La cuenta no está abierta");
        if (cantidad < 0) throw runtime_error("Cantidad negativa");
        if (cantidad > saldo) throw runtime_error("Fondos insuficientes");
        saldo -= cantidad;
    }
};

int main() {
    BankAccount cuenta;

    cuenta.abrir();
    cuenta.depositar(100);
    cuenta.retirar(30);

    cout << cuenta.obtenerSaldo() << endl;

    cuenta.cerrar();

    return 0;
}
