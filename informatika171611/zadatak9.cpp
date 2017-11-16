#include <bits/stdc++.h>

using namespace std;

int main() {
    int broj, jedinice, desetice, stotine;

    while(true) {
        cin >> broj;

        jedinice = broj % 10;
        desetice = (broj / 10) % 10;
        stotine = broj / 100;

        if ((jedinice + desetice + stotine) % 2 == 0)
            cout << "Jeste" << endl << endl;
        else
            cout << "Nije" << endl << endl;
    }
}
