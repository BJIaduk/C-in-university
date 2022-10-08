#include <iostream>
using namespace std;
void pr(int b);
int main()
{
    int a;
    cin >> a;
    pr(a);
}
void pr(int b)
{
    while (b)
    {
        cout << b % 10 << endl;
        b /= 10;
    }
}