#include <iostream>
using namespace std;




/*


*   *
 * *
  *
 * *
*   *


*/
void pattern(int x, int h);
void star(int h, int g);
int
main()
{
	int n = 5, i = 1;
	pattern(n, i);
	return 0;
}

void
star(int j, int g, int i)
{
	if (i > g)
	{
		return;
	}
	else if (i == j || i == (g + 1 - j))
	{
		cout << "*";
	}
	else
		cout << " ";
	star(j, g, i + 1);

}

void
pattern(int x, int h)
{
	if (h > x)
	{
		return;
	}
	else
		star(h, x, 1);
	cout << endl;
	pattern(x, h + 1);
}
