#include <iostream>
using namespace std;
int main()
{
	int N, a, b;
	a = 1;
	cin >> N;
	for (b = 1; N >= b; b++)
		a *= b;
	cout << a;
	return 0;
}