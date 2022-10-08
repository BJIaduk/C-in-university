#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int N;
	cin >> N;
	cout << 1 + rand() % N;
	return 0;
}