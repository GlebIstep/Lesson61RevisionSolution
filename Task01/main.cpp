#include "logic.h"

// & *

int main() {
	int a = 20, b = 50, c = 10;

	cout << "Before: " << a << " " << b << " " << c << endl;

	get_in_order(&a, &b, &c);

	cout << "After: " << a << " " << b << " " << c << endl;


	return 0;
}