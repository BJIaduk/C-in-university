#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cin >> x >> y;
	if (y < 2)
		cout << "����� c ������������ (" << x << "," << y
			 << ") ������ � �������������� �������";
	else {
		if (y > 2)
			cout << "����� c ������������ (" << x << "," << y 
				 << ") �� ������ � �������������� �������";
		else
			cout << "����� c ������������ (" << x << "," << y 
				 << ") ������ �� ������� �������������� �������";
	}
	return 0;
}