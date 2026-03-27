#include <iostream>
using namespace std;
long long collatzSteps(long long n) {
    int pasos = 0;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        pasos++;
    }
    return pasos;
}

int main() {
    long long n;
    cin >> n;
    cout << collatzSteps(n) << endl;
    return 0;
}