#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	
	cout << "Koordinate prvog polja: ";
	cin >> x1 >> y1;
	cout << endl << "Koordinate drugog polja: ";
	cin >> x2 >> y2;
	cout << endl;

	bool boja1, boja2;
	
	// true je crna, false bela

	if (abs(x1 - y1) % 2 == 0) {
		// Razlika je parna, pa je boja bela
		boja1 = false;
	} else {
		// Razlika je neparna, pa je boja crna
		boja1 = true; 
	}

	// Isti postupak za drugo polje
	if (abs(x2 - y2) % 2 == 0) {
		boja2 = false;
	} else {
		boja2 = true;
	}

	// Ispitujemo da li su iste boje, vracamo true ako jesu
	if (boja1 == boja2) {
		cout << true;
	} else {
		cout << false;
	}
	
	return 0;
}
