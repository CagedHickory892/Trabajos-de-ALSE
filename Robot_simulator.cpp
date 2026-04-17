#include <iostream>
#include <string>
using namespace std;

class Robot {
private:
    int x, y;
    int dir; // 0=N, 1=E, 2=S, 3=W

public:
    Robot(int startX, int startY, char direction) {
        x = startX;
        y = startY;

        if (direction == 'N') dir = 0;
        else if (direction == 'E') dir = 1;
        else if (direction == 'S') dir = 2;
        else dir = 3;
    }

    void ejecutar(string instrucciones) {
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        for (char c : instrucciones) {
            if (c == 'R') {
                dir = (dir + 1) % 4;
            }
            else if (c == 'L') {
                dir = (dir + 3) % 4; // equivalente a -1
            }
            else if (c == 'A') {
                x += dx[dir];
                y += dy[dir];
            }
        }
    }

    void imprimirEstado() {
        char dirs[4] = {'N', 'E', 'S', 'W'};
        cout << "Posicion: (" << x << ", " << y << ")\n";
        cout << "Direccion: " << dirs[dir] << endl;
    }
};

int main() {
    Robot r(7, 3, 'N');
    r.ejecutar("RAALAL");
    r.imprimirEstado();
    return 0;
}