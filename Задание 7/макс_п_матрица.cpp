#include <iostream>

using namespace std;

int main()
{
	int i, j, umn;
	int A[3][3];
	int C[3] = { 0 };//������������� ������
	int size, K;

	printf("Input size - ");

	cin >> size;

	//���� �������
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("[%d][%d]: ", i , j);
			cin >> A[i][j];
		}
	}

	umn = 0;
	//����� ������� � ��������
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			umn = A[i][j] + umn;
			printf(" %d ", A[i][j]);
		}
		printf("\n");
	}

	//�������� �������
	for (j = 0; j < size; j++) {
		K = 0;
		for (i = 0; i < size; i++) {
			if (A[i][j] == 0) {
				K = K + 1;
			}
		}
		if (K == size) {
			C[j] = 0;
		}
		else {
			C[j] = 1;
		}
	}

	//����� ������� C
	printf("Array C: ");
	for (i = 0; i < size; ++i) {
		printf(" %d ", C[i]);
	}
	printf("\n");
	printf("Composition matrix A = %d ", umn);
	//system("pause");
	return 0;
}
