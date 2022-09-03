/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x;
	x = 172.36589012345678;
	cout << setprecision(6)<<x<<endl;     //в не научном типе (6) - не количество чисел после дробной части, а общее кол-во чисел
	cout << scientific<<x<<endl;          //можем не писать повторно setprecision(6), тк кол-во чисел после дробной части = 6
	cout << setprecision(2) << x << endl; //не пишем scientific, тк его действие сохраняется
	cout << fixed << x << endl;			  
	cout << setw(10) << x;				  //не пишем setprecision и fixed, их действие сохраняется
	return 0;
}*/