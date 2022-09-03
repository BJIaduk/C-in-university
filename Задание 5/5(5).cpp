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
	int N;
	for ( N = 1; b/= 10; N++);
	return N;
}