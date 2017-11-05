#include <iostream>

using namespace std;

int main() {
	unsigned int dan1, dan2, dan3;

	cin >> dan1 >> dan2 >> dan3;
	
	// Podrazumevamo da korisnik unosi brojeve vece od 0 i manje od 365

	dan1 %= 7;
	dan2 %= 7;  // Mislim da postoji krace resenje za ove tri linije, provericu
	dan3 %= 7;
	
	if (dan1 == dan2 && dan2 == dan3)
		cout << true;
	else
		cout << false;

	return 0;
}
