#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
	srand(time(0));

	const int N = 3;
	int M[N][N] = {}, sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			M[i][j] = 1 + rand() % 3;
			cout << setw(3) << M[i][j];
			sum = sum + M[i][j];
		}
		cout << endl;
	}

cout << endl << sum;

return 0;
}