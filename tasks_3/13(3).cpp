#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cin >> x >> y;
	if (y < -x)
		cout << "точка c координатами (" << x << "," << y
		<< ") попала в заштрихованную область";
	else {
		if (y > -x)
			cout << "точка c координатами (" << x << "," << y
			<< ") не попала в заштрихованную область";
		else
			cout << "точка c координатами (" << x << "," << y
			<< ") попала на границу заштрихованной области";
	}
	return 0;
}