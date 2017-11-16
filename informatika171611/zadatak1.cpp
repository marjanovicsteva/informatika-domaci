#include <iostream>

using namespace std;

int funkcija(int a, int b) {
    if (a % 2 == 0)
        return a * b;
    else
        return a + b;
}

int main() {
    int f;
    int a, b;
    while (true) {
        cin >> a >> b;

        f = funkcija(a, b);

        cout << f << endl << endl;
    }

    return 0;
}
