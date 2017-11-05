#include <iostream>

using namespace std;

int main() {
	float a, b, x, y;

	cin >> a >> b;

	if (b > 0) {
		if (-(b / a) > 0) {
			cout << "1";
		} else if (-(b / a) < 0) {
			cout << "2";
		}
	} else if (b < 0) {
		if (-(b / a) > 0) {
			cout << "3";
		} else if (-(b / a) < 0) {
			cout << "4";
		}
	} else {
		cout << "'b' mora biti razlicito od 0";
	}
	
	return 0;
}
