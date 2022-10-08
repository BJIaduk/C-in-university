#include <iostream>
using namespace std;
int main()
{
	int a, c = 0;
	cin >> a;
	while (a > 0) {
		c += a % 10;
		a = a / 10;
	}
	cout << c;
	return 0;
}