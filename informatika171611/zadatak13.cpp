#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b;
    char znak;

    while(true) {
        cin >> a >> znak >> b;

        switch(znak) {
            case '+':
                cout << a + b << endl << endl;
                break;
            case '-':
                cout << a - b << endl << endl;
                break;
            case '*':
                cout << a * b << endl << endl;
                break;
            case '/':
                cout << a / b << endl << endl;
                break;
            default:
                cout << "Error 404: Operation not found." << endl << endl;
                break;
        }
    }
}
