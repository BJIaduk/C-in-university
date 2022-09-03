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

	int l_max = 0, c_max = 0, max = 0;
	int l_min = 0, c_min = 0, min = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
		}
	}
	max = min = M[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (M[i][j] > max) {
				max = M[i][j];
				l_max = i;
				c_max = j;
			}
			if (M[i][j] < min) {
				min = M[i][j];
				l_min = i;
				c_min = j;
			}
		}
	}

	cout << endl;
	cout << l_max + 1 << " " << c_max + 1 << " " << max << endl;
	cout << l_min + 1 << " " << c_min + 1 << " " << min << endl;

	return 0;
}