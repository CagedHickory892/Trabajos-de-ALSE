#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class SquareCode {
public:
    string encode(string text) {
        //quitar espacios,puntuación y pasar a minúsculas
        string normalized = "";
        for (char c : text) {
            if (isalnum(c)) {
                normalized += tolower(c);
            }
        }

        int n = normalized.size();

        //Calcular r y c
        int r = floor(sqrt(n));
        int c = ceil(sqrt(n));
        if (r * c < n) r++;

        //Construir la matriz
        vector<string> grid(r, string(c, ' '));
        int idx = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (idx < n) {
                    grid[i][j] = normalized[idx++];
                }
            }
        }

        //Leer por columnas y formar bloques
        string result = "";
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                result += grid[i][j];
            }
            result += ' '; // separar bloques
        }

        return result;
    }
};

// Ejemplo de uso
int main() {
    SquareCode sc;

    string text;
    getline(cin, text);

    cout << sc.encode(text) << endl;
    return 0;
}