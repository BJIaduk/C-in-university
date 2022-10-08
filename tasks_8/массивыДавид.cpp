#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	const int N = 3;
	float sum = 0, midle = 0, sum2 = 0;
	int M[N][N] = {};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
			sum = sum + M[i][j];
		}
		cout << endl;
	}

	cout << endl << sum / (N*N);

	for (int i = 0; i < N; i++) {
		if (M[i][i] < 0) {
			sum2 = sum2 + M[i][0] + M[i][1] + M[i][2];
		}
	}

	cout << endl << sum2;

	return 0;
}