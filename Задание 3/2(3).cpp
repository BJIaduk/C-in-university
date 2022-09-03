#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	cin >> i;
	if (i > 0)
		cout << "Число положительное";
	else {
		if (i < 0)
			cout << "Число отрицательное";
		else
			cout << i;
	}
	return 0;
}