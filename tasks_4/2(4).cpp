#include <iostream>
using namespace std;
int main()
{
	int N, b, a = 0;
	cin >> N;
	for (b = 0; N >= b; b++)
		a += b;
	cout << a;
	return 0;
}