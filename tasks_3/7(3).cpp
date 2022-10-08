#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	bool l;
	cin >> a >> b >> c;
	l = ((a + b > 30) || (a + c > 30) || (b + c > 30));
	cout << boolalpha << l;
	return 0;
}