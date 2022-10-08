#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	bool l;
	cin >> x >> y;
	l = (x == 0 && y != 0 || y == 0 && x != 0);
	if (l)
		cout << "одно значение равно нулю";
	else
		cout << "либо оба значения равны нулю, либо ни одного";
	return 0;
}