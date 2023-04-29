#include <iostream>
#include "Header.h"
using namespace std;
int main() {

	int choice = 0;
	char* r1 = new char[20];

	cout << "Enter the 1st string " << endl;
	cin >> r1;
	char r2;
	cout << "Enter the Word " << endl;
	cin >> r2;

	for (int i = 0; i < 20; i++) {
		if (*(r1 + i) == r2) {
			for (int j = i; j < 20; j++) {
				cout << *(r1 + j);
			}
		}
	}


	return 0;
}