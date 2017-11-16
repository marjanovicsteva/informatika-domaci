#include <bits/stdc++.h>

using namespace std;

int main() {
    int broj, jedinica, desetica;

    while (true) {
        cin >> broj;

        jedinica = broj % 10;
        desetica = broj / 10;

        if (broj % (jedinica + desetica) == 0)
            cout << "Jeste" << endl << endl;
        else
            cout << "Nije" << endl << endl;
    }
}
