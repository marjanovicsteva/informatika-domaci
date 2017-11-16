#include <bits/stdc++.h>

using namespace std;

int main() {
    float x, y, z;

    while(true) {
        cin >> x >> y;
        z = (min(x, y) + 0.5) / (1 + (max(x, y) * max(x, y)));
        cout << z << endl << endl;
    }

    return 0;
}
