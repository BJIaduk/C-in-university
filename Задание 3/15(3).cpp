#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double r, x, y;
	cout << "������� ������ �����:";
	cin >> r;
	cout << "������� ���������� ����� x, y:";
	cin >> x >> y;
	if ((y < x) && (x < r) && (r < sqrt(pow(x, 2) + pow(y, 2))))
		cout << "����� c ������������ (" << x << "," << y
		<< ") ������ � �������������� �������";
	else {
		if ((y > x) || (x > r) || (r > sqrt(pow(x, 2) + pow(y, 2))) || (y < 0))
			cout << "����� c ������������ (" << x << "," << y
			<< ") �� ������ � �������������� �������";
		else
			cout << "����� c ������������ (" << x << "," << y
			<< ") ������ �� ������� �������������� �������";
	}
	return 0;
}