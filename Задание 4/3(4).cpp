#include <iostream>
using namespace std;
int main()
{
	int N, a = 0, b = 1;
	cin >> N;
	do {
		if (!(b % 2)) {
			cout << b << " ";
			a++;
		}
		b++;
	} while (N > a);
	return 0;
}