#include <iostream>
#include <clocale>;
using namespace std;
int pr(float r1, float x1, float y1);
int main()
{
	setlocale(LC_ALL, "Russian");
	float r, x, y;
	cin >> r >> x >> y;
	if (pr(r, x, y) == 1)
		cout << "����� " << x1 << ";" << y1
		<< " �������� � �������������� �������";
	if (pr(r, x, y) == 2)
		cout << "����� " << x1 << ";" << y1
		<< " �������� �� ������� �������������� �������";
	else (pr(r, x, y) == 3)
		cout << "����� " << x1 << ";" << y1
		<< " ����� ��� �������������� �������";
}
int pr(float r1, float x1, float y1)
{
	if (r1 > sqrt(pow(x1, 2) + pow(y1, 2)) && x1 < 0 && y1 < 0)
		return 1;
	else {
		if ((r1 == sqrt(pow(x1, 2) + pow(y1, 2)) && x1 <= 0 && y1 <= 0)
			|| (x1 <= 0 && x1 >= -1 && y1 == 0)
			|| (y1 <= 0 && y1 >= -1 && x1 == 0))
			return 2;
		else
			return 3;
	}
}