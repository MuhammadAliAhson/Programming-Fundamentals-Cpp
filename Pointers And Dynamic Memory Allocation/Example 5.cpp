#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	int choice = 0;
	char* r1 = new char[20];

	cout << "Enter the 1st string " << endl;
	cin >> r1;
	char* r2 = new char[20];
	cout << "Enter the 2nd string " << endl;
	cin >> r2;

	 swap(r1, r2);
	 cout << "1st string" << endl;
	 for (int i = 0; i < 20; i++) {
		 cout << *(r1 + i) ; 
	 }
	 cout << "2nd string" <<endl;
	 for (int i = 0; i < 20; i++) {
		cout<< *(r2 + i);
	 }
	return 0;
}