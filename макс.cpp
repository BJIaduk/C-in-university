/*
Изменить матрицу, прибавляя к каждому отрицательному элементу  предыдущий элемент той же строки.
К первому элементу, если он отрицателен, прибавить последний элемент данной строки.
*/

#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(0));
	int i, j, c, d;
	const int a = 3, b = 3;

	cout << " от: ";
	cin >> c;
	cout << " до: ";
	cin >> d;

	int m[a][b] = {};

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			m[i][j] = c + rand() % (d - c + 1);
			cout << setw(3) << m[i][j];
		}
		cout << endl;
	}


	cout << endl;

	for (i = 0; i < a; i++)
	{
			if (m[i][0] < 0)
			{
				m[i][0] += m[i][2];
			}

	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (j > 0) {
			if (m[i][j] < 0)
			{
				m[i][j] += m[i][j - 1];
			}
			}
			cout << setw(3) << m[i][j];
		}
		cout << endl;
	}


	return 0;
}

