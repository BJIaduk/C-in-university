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
		cout << "���� �������� ����� ����";
	else
		cout << "���� ��� �������� ����� ����, ���� �� ������";
	return 0;
}