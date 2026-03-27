#include <iostream>
using namespace std;

int main() {
    long long segundos;
    
    const double SEGUNDOS_TIERRA = 31557600;

    // Periodos orbitales
    const double MERCURY = 0.2408467;
    const double VENUS = 0.61519726;
    const double EARTH = 1.0;
    const double MARS = 1.8808158;
    const double JUPITER = 11.862615;
    const double SATURN = 29.447498;
    const double URANUS = 84.016846;
    const double NEPTUNE = 164.79132;

    cout << "Ingrese su edad en segundos: ";
    cin >> segundos;

    double edadTierra = segundos / SEGUNDOS_TIERRA;

    cout << "\nEdad en diferentes planetas:\n";
    cout << "Mercurio: " << edadTierra / MERCURY << " años\n";
    cout << "Venus: " << edadTierra / VENUS << " años\n";
    cout << "Tierra: " << edadTierra / EARTH << " años\n";
    cout << "Marte: " << edadTierra / MARS << " años\n";
    cout << "Jupiter: " << edadTierra / JUPITER << " años\n";
    cout << "Saturno: " << edadTierra / SATURN << " años\n";
    cout << "Urano: " << edadTierra / URANUS << " años\n";
    cout << "Neptuno: " << edadTierra / NEPTUNE << " años\n";

    return 0;
}