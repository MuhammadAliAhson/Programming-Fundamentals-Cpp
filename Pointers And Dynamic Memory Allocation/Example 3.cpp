#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	int choice = 0;
	char* r1 = new char[10];

	cout << "Enter the 1st string " << endl;
	cin >> r1;
	char* r2 = new char[10];
	cout << "Enter the 2nd string " << endl;
	cin >> r2;

	choice = compare(r1, r2);
	if (choice == 1) {
		cout << "Its true";
	}
	else {
		cout << "Its false";
	}

	return 0;
}