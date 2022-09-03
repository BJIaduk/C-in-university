#include <iostream>
#include <cmath>
#include <random>
using namespace std;
int main()
{
	srand(time(0));
	int a, b, N, c;
	cin >> a >> b >> N;
	for (c = 0; N > c; c++)
		cout << a + rand() % (b - a + 1) << " ";
	return 0;
}