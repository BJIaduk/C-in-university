#include <iostream>
using namespace std;
int max(int a1, int b1)
{
	if (a1 > b1) return a1;
	else return b1;
}
int max3(int a1, int b1, int c1)
{
	return max(max(a1, b1), max(b1, c1));
}
void main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << max3(a, b, c);
}
