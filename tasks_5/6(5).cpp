#include <iostream>
using namespace std;
int pr(int b);
int main()
{
	int a;
	cin >> a;
	cout << pr(a);
}
int pr(int b)
{
	int N, c = 1;
	for (N = 1; N<=b; N++)
		c*=N;
	return c;
}