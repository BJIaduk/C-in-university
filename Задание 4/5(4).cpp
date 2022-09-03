#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c = 0;
	cin >> a >> b;
	while (b >= a) {
		c += pow(a, 2);
		a++;
	}
		cout << c << endl;
	return 0;
}