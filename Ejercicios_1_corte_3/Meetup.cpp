#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Convierte nombre del día a número (0=Domingo, 1=Lunes, ..., 6=Sábado)
int diaSemanaNumero(string dia) {
    if (dia == "Sunday") return 0;
    if (dia == "Monday") return 1;
    if (dia == "Tuesday") return 2;
    if (dia == "Wednesday") return 3;
    if (dia == "Thursday") return 4;
    if (dia == "Friday") return 5;
    if (dia == "Saturday") return 6;
    return -1;
}

// Función principal
int meetupDay(int year, int month, string weekday, string schedule) {
    vector<int> diasValidos;
    int objetivo = diaSemanaNumero(weekday);

    // Recorrer todos los días del mes
    for (int d = 1; d <= 31; d++) {
        tm tiempo = {};
        tiempo.tm_year = year - 1900;
        tiempo.tm_mon = month - 1;
        tiempo.tm_mday = d;

        // mktime ajusta fechas inválidas automáticamente
        if (mktime(&tiempo) == -1) continue;

        // Verificar que sigue en el mismo mes
        if (tiempo.tm_mon != month - 1) continue;

        if (tiempo.tm_wday == objetivo) {
            diasValidos.push_back(d);
        }
    }

    // Seleccionar según el tipo
    if (schedule == "first") return diasValidos[0];
    if (schedule == "second") return diasValidos[1];
    if (schedule == "third") return diasValidos[2];
    if (schedule == "fourth") return diasValidos[3];
    if (schedule == "last") return diasValidos.back();

    if (schedule == "teenth") {
        for (int d : diasValidos) {
            if (d >= 13 && d <= 19)
                return d;
        }
    }

    return -1; // error
}

int main() {
    int year = 2020;
    int month = 5;
    string weekday = "Wednesday";
    string schedule = "teenth";

    int dia = meetupDay(year, month, weekday, schedule);

    cout << "La fecha es: " << year << "-" << month << "-" << dia << endl;

    return 0;
}
