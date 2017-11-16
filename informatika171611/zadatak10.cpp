#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long int sat, minut, sekund, n, vreme;
    unsigned long int sat1, minut1, sekund1;
    unsigned long int dan;

    while (true) {
        cin >> sat >> minut >> sekund >> n;

        vreme = ((sat * 60) + minut) * 60 + sekund;

        vreme += n;

        sekund1 = vreme % 60;
        vreme /= 60;
        minut1 = vreme % 60;
        vreme /= 60;
        sat1 = vreme;

        if (sat1 >= 24) {
            dan = sat1 / 24;
            sat1 -= dan * 24;
        }

        cout << sat1 << ":" << minut1 << ":" << sekund1 << endl << endl;
    }
}
