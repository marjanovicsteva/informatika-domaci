#include <iostream>

using namespace std;

int main()
{
    int poeni, ocena;
    
    cout << "Unesite broj poena: ";
    cin >> poeni;
    cout << endl;
    
    if (poeni <= 100 && poeni >= 90)
        ocena = 5;
    else if (poeni < 90 && poeni >= 75)
        ocena = 4;
    else if (poeni < 75 && poeni >= 60)
        ocena = 3;
    else if (poeni < 60 && poeni >= 45)
        ocena = 2;
    else if (poeni < 45 && poeni >= 0)
        ocena = 1;
    else
        cout << "Lose uneti poeni. Molimo unesite broj izmedju 0 i 100.";
    if (ocena != 0)
        cout << "Vasa ocena je: " << ocena;
        
    return 0;
}