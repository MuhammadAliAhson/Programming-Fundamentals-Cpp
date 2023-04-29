#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	int* ptr = new int[10];
	for (int i = 0; i < 10; i++) {
		cin >> *(ptr + i);
	}
	fun(ptr);
	for (int i = 0; i < 10; i++) {
		cout << *(ptr + i);
	}


	return 0;
}