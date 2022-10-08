#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
//Изменить матрицу, заменив каждый отрицательный элемент, лежа¬щий выше главной диагонали, его абсолютной величиной. Найти также сумму элементов главной диагонали.
	srand(time(0));
	const int N = 3;
	int M[N][N] = {};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			M[i][j] = -10 + rand() % 16;
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		for (int j = N-1; j > i; j--) {
			M[i][j] = abs(M[i][j]);
		}
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += M[i][i];
	}
	cout << sum;
	return 0;
}