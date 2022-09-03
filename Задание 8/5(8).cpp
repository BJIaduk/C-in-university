#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int N = 3;
	int M[N][N] = {};

	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
		}
	}
	max = M[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (M[i][j] > max) {
				max = M[i][j];
			}
		}
	}

	cout << endl;

	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			if (M[i][j] == max) {
				cout << M[0][j] << " " << M[1][j] << " " << M[2][j] << " " << endl;
				break;
			}
		}
	}

	return 0;
}