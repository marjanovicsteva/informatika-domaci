#include <bits/stdc++.h>

using namespace std;

int main() {
    int dan, mesec, godina;
    int brDana;

    while (true) {
        cin >> dan >> mesec >> godina;

        switch (mesec) {
            case 2:
                brDana = 28;
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                brDana = 31;
                break;
            default:
                brDana = 30;
                break;
        }

        dan++;
        if (dan > brDana) {
            dan -= brDana;
            mesec++;
            if (mesec > 12)
                mesec -= 12;
                godina++;
        }

        cout << dan << "." << mesec << "." << godina << "." << endl << endl;
    }

}
