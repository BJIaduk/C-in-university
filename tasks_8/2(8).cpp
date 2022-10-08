#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
	srand(time(0));

	const int N = 3;
	int M[N][N] = {}, K, count = 0;

	cin >> K;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M[i][j];
			if (M[i][j] == K)
				count++;
		}
		cout << endl;
	}

	cout << endl << count;

	return 0;
}