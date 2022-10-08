#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, a, b;
	cin >> x >> a >> b;
	if (a <= x && x <= b)
		cout << x << " принадлежит отрезку " << "[" << a
		<< "," << b << "]";
	else
		cout << x << " не принадлежит отрезку " << "[" << a
		<< "," << b << "]";
	return 0;
}