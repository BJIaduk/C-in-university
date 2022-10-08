#include <iostream>
using namespace std;
int main()
{
	int* a;
	int n;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int c = a[n-1], d = a[n - 2], e = a[n - 3];
	for (int i = n; i >= 3; i--)
		a[i] = a[i-3];
	a[2] = c;
	a[1] = d;
	a[0] = e;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
