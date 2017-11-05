#include <iostream>

using namespace std;

int main() {
	float x, y;
	
	cin >> x;

	if (x < 0)
		y = -5;
	else if (x >= 0 && x < 1)
		y = x + 2;
	else if (x >= 1 && x < 5)
		y = 3 * x - 1;
	else
		y = 2 * x;

	cout << y;

	return 0;
}
