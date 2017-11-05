#include <iostream>

using namespace std;

int main() {
	float x, y;

	cin >> x;

	if (x > -2 && x < 2)
		y = 2 * x;
	else if (x >= 5 && x <= 7)
		y = 3 * x - 1;
	else
		y = 1 / x;

	cout << y;

	return 0;
}
