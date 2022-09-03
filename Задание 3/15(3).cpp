#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double r, x, y;
	cout << "¬ведите радиус круга:";
	cin >> r;
	cout << "¬ведите координаты точки x, y:";
	cin >> x >> y;
	if ((y < x) && (x < r) && (r < sqrt(pow(x, 2) + pow(y, 2))))
		cout << "точка c координатами (" << x << "," << y
		<< ") попала в заштрихованную область";
	else {
		if ((y > x) || (x > r) || (r > sqrt(pow(x, 2) + pow(y, 2))) || (y < 0))
			cout << "точка c координатами (" << x << "," << y
			<< ") не попала в заштрихованную область";
		else
			cout << "точка c координатами (" << x << "," << y
			<< ") попала на границу заштрихованной области";
	}
	return 0;
}