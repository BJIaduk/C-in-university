#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	bool l;
	cin >> a >> b >> c;
	l = ((10 <= a && a <= 99) && (10 <= b && b <= 99) && (10 <= c && c <= 99));
	cout << boolalpha << l;
	return 0;
}