#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b;

    while (true) {
        cin >> a >> b;

        if (a > b) {
            a = b + a;
            b = a - b;
            a = a - b;
        }

        cout << a << " " << b << endl << endl;

    }

    return 0;
}
