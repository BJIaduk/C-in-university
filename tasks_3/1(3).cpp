#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, min;
	cin >> a >> b;
	if (a < b)
		min = a;
	else {
		if (b < a)
			min = b;
		cout << min;
	}
	return 0;
}