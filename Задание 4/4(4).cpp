#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for (; a <= b; a++)
		cout << a <<" ^ 2 = " << pow(a, 2) << endl;
	return 0;
}