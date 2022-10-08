#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	bool l ;
	cin >> a >> b >> c;
	l = ((a < 0) || (b < 0) || (c < 0));
	cout << boolalpha << l;
	return 0;
}