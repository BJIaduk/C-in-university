#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	cin >> i;
	if (i % 2)
		cout << "���";
	else
		cout << "��";
	return 0;
}