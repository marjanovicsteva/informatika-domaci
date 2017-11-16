#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b, c;

    while (true) {
        cin >> a >> b >> c;

        if (a == b && b == c)
            cout << "js" << endl << endl;
        else {
        if (a == c || a == b || b == c)
            cout << "jk" << endl << endl;

        else
            cout << "rs" << endl << endl;
        }
    }
}
