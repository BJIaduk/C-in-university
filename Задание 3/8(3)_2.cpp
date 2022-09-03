#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0 || x < 0 && x > 0)
		cout << x << ", " << y << " числа одного знака";
	else
		cout << x << "," << y << " числа имеют разные знаки";
	return 0;
}