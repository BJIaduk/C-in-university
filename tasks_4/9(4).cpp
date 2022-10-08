#include <iostream>
using namespace std;
int main()
{
	int a, min, max;
	cin >> a;
	min = max = a;
	for (; a != 0;) {
	cin >> a;
		if (min > a && a!=0)
			min = a;
		if (max < a && a!=0)
			max = a;
	}
	cout << min << " " << max;
	return 0;
}