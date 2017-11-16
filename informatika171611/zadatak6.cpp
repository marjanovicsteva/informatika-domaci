#include <bits/stdc++.h>

using namespace std;

int main() {
    int godina;
    bool jePrestupna = false;

    while(true) {
        cin >> godina;

        if (godina % 4 == 0)
            jePrestupna = true;
        if (godina % 100 == 0)
            jePrestupna = false;
        if (godina % 400 == 0)
            jePrestupna = true;

        cout << jePrestupna << endl << endl;
    }
}
