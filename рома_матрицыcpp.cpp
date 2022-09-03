#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	const int N = 5;
	int sum = 0;
	int M[N][N] = {};
	int X[N];

	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
		}
		cout << endl;
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		count = 0;
		for (int j = 0; j < N; j++) {
			if (M[i][j] < X[i])
				count++;
			sum += M[i][j];
		}
		if (count == N)
			cout << X[i] << " ";
	}

	cout << endl << sum;

	return 0;
}