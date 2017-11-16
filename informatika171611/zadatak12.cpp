#include <bits/stdc++.h>

using namespace std;

int main() {
    int ugao;
    int kvadrant;

    while(true) {
        cin >> ugao;

        ugao %= 360;

        ugao /= 90;

        switch (ugao) {
            case 0:
                cout << "1";
                break;
            case 1:
                cout << "2";
                break;
            case 2:
                cout << "3";
                break;
            case 3:
                cout << "4";
                break;

        }
    }

}
