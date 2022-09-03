#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c = 0, d;
	cin >> a >> b;
	for (d = 0; abs(b) > d; d++)
		c += abs(a);
	if (a * b >= 0)
		cout << c;
	else
		cout << -c;
	return 0;
}