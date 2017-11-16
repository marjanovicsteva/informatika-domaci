#include <bits/stdc++.h>

using namespace std;

int main() {
    int sat, minut, sekund;


    while (true) {
        cin >> sat >> minut >> sekund;

        sekund++;
        if (sekund >= 60) {
            sekund -= 60;
            minut++;
            if (minut >= 60) {
                minut -= 60;
                sat++;
                if (sat >= 24)
                    sat -= 24;
            }
        }

        cout << sat << ":" << minut << ":" << sekund << endl << endl;
    }
}
