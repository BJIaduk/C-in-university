#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, r;
	cin >> x >> y >> r;
	if (abs(x) <= r && abs(y) <= r) {
		if (abs(x) < sqrt(pow(r, 2) - pow(y, 2)))
			cout << "����� c ������������ (" << x << "," << y
			<< ") ������ � �������������� �������";
		else {
			if (abs(x) > sqrt(pow(r, 2) - pow(y, 2)))
				cout << "����� c ������������ (" << x << "," << y
				<< ") �� ������ � �������������� �������";
			else
				cout << "����� c ������������ (" << x << "," << y
				<< ") ������ �� ������� �������������� �������";
		}
	}
	else cout << "����� c ������������ (" << x << "," << y
		<< ") �� ������ � �������������� �������";
	return 0;
}