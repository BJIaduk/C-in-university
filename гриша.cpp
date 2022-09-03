#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	const int N = 3;
	float sum = 0, midle = 0, sum2 = 0;
	int M[N][N] = {};
	int X;

	cin >> X;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
		}
		cout << endl;
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (M[i][i] < 0) {
			for (int j = 0; j < N; j++) {
				M[i][j] = M[i][j] + X;
			}
			count++;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << count;

	return 0;
}