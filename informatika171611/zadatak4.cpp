#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, y, x;

    while(true) {
        cin >> x >> a >> b;

        switch (x) {
            case 0:
                y = max(a, b);
                break;
            case 1:
                y = min(a, b);
                break;
            default:
                y = abs(a + b);
        }

        cout << y << endl << endl;
    }

    return 0;
}
