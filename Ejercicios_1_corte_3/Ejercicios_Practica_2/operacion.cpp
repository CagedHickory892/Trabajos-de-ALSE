#include <iostream>
#include <string>
#include <functional>

using namespace std;

// Funciones para cada operación
double suma(double a, double b) {
    return a + b;
}
    
double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        throw runtime_error("Error: No se puede dividir entre cero.");
    }
    return a / b;
}

int main(int argc, char* argv[]) {

    // Validar cantidad de argumentos
    if (argc != 4) {
        cout << "Ha ingresado valores inadecuados para el programa:\n";
        cout << "Uso: ./operacion <num1> <operador> <num2>\n";
        return 1;
    }

    try {
        string arg1 = argv[1];
        string operador = argv[2];
        string arg2 = argv[3];

        // Convertir a double (permite decimales)
        double num1 = stod(arg1);
        double num2 = stod(arg2);

        function<double(double, double)> operacion;

        // Seleccionar operación (callback)
        if (operador == "+") {
            operacion = suma;
        } 
        else if (operador == "-") {
            operacion = resta;
        } 
        else if (operador == "*" || operador == "x" || operador == "X") {
            operacion = multiplicacion;
        } 
        else if (operador == "/") {
            operacion = division;
        } 
        else {
            cout << "Operador inválido. Use +, -, *, x o /\n";
            return 1;
        }

        double resultado = operacion(num1, num2);

        cout << "El resultado de la operacion es " << resultado << endl;

    } 
    catch (invalid_argument&) {
        cout << "Error: Uno de los valores ingresados no es un número válido.\n";
        return 1;
    } 
    catch (exception& e) {
        cout << e.what() << endl;
        return 1;
    }

    return 0;
}