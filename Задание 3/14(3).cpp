#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, r;
	cin >> x >> y >> r;
	if (abs(x) <= r && abs(y) <= r) {
		if (abs(x) < sqrt(pow(r, 2) - pow(y, 2)))
			cout << "точка c координатами (" << x << "," << y
			<< ") попала в заштрихованную область";
		else {
			if (abs(x) > sqrt(pow(r, 2) - pow(y, 2)))
				cout << "точка c координатами (" << x << "," << y
				<< ") не попала в заштрихованную область";
			else
				cout << "точка c координатами (" << x << "," << y
				<< ") попала на границу заштрихованной области";
		}
	}
	else cout << "точка c координатами (" << x << "," << y
		<< ") не попала в заштрихованную область";
	return 0;
}