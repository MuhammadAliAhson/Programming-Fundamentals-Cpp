#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	float* r = new float[5];

	for (int i = 0; i < 5; i++) {
		cin >> *(r + i);
	}
	half(r);
	cout << "The half value is  " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(r + i) << endl;
	}
	cout << "The product is  " << multiply(r);
	delete[] r;

	return 0;
}