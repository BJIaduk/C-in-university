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

	int sum = 0;
	int min = 0, line_min = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
		}
	}

	for (int j = 0; j < N; j++) {
		min += M[0][j];
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += M[i][j];
		}
		if (sum < min) {
			min = sum;
			line_min = i;
		}
	}

	cout << endl;
	cout << M[line_min][0] << " " << M[line_min][1] << " " << M[line_min][2];

	return 0;
}