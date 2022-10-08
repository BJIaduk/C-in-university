#include <iostream>
using namespace std;
int main()
{
	int a, b = 0, c = 1;
	do {
		cin >> a;
		b += a;
		if (a)
		c *= a;
	} while (a != 0);
	cout << b << " " << c;
	return 0;
}