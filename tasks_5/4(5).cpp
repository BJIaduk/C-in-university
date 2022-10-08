#include <iostream>
using namespace std;
int pr(int a1, int b1, int c1);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << pr(a, b, c);
}
int pr(int a1, int b1, int c1)
{
	if (a1 > b1 && a1 > c1)
		return a1;
	else {
		if (b1 > c1)
			return b1;
		else
			return c1;
	}
}