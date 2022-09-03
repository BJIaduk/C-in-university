#include <iostream>
#include <clocale>
using namespace std;
void f(int A, int p, int B, int N, int &m);
int main()
{
    setlocale(LC_ALL, "ru");
    int A1, p1, B1, N1, m1 = 0;
    cin >> A1 >> p1 >> B1 >> N1;
    f(A1, p1, B1, N1, m1);
    if (m1 >= 0)
        cout << m1;
    else
        cout << "m превысило N";
}
void f(int A, int p, int B, int N, int &m)
{
    int S = 0;
    for (; S < B; m++) {
        if (m < N)
            S = S * (1 + p / 100) + A;
        else {
            m = -1;
            break;
        }
    }
}