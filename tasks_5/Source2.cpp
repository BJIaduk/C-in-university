#include <iostream>
using namespace std;
int f(int A, int p, int B, int N);
int main()
{
    int A1, p1, B1, N1;
    cin >> A1 >> p1 >> B1 >> N1;
    cout << f(A1, p1, B1, N1);
}
int f(int A, int p, int B, int N)
{
    int m, S = 0;
    for (m = 0; S < B; m++) {
        if (m >= N) {
            cout << "m превысило N";
            break;
        }
        S = S * (1 + p / 100) + A;
    }
    return m;
}