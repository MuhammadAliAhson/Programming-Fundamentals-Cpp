#include <iostream>

using namespace std;

/*

*       *
 *     *
  *   *
   * *
    *
    *
    *

*/



void pattern(int x, int h);
void star(int h, int g);
int main()
{
	int n = 9, i = 1;
	pattern(n, i);
	return 0;
}
void star(int j, int g, int i) {
	if (i > g) {
		return;
	}
	else if (i == j || i == (g + 1 - j)) {
		cout << "*";
	}
	else
		cout << " ";
	star(j, g, i + 1);

}
void space(int n) {
	if (n == 0) {
		return;
	}
	cout << " ";
	space(n - 1);

}
void pattern(int x, int h) {
	if (h == x) {
		return;
	}
	else if (h < (x / 2) + 1) {
		star(h, x, 1);
		cout << endl;

	}
	if (h >= (x / 2) + 2) {
		space(x / 2);
		cout << "*";
		cout << endl;
	}
	pattern(x, h + 1);
}
