#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double s, d, r;
    cin >> s >> d;
    r = pow(((s + d) / s), 1 / 10) - 1;
    cout << setprecision(10) << r;
    return 0;
}