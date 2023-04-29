#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	int* r = new int[10];

	for (int i = 0; i < 10; i++) {
		cin >> *(r + i);

	}
	cout << "The largest number is " << max(r) << endl;
	cout << "The smallest num " << min(r);
	delete[] r;

	return 0;
}