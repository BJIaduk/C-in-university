#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j;
	cin >> i;
	j = (i % 10 * 1000) + (i % 100 / 10 * 100) + (i % 1000 / 100 * 10) + (i / 1000);
	if (i == j)
		cout << "Число является палиндромом";
	else
		cout << "Число не является полиндромом";
	return 0;
}