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
    int c = 1;
    while (c <= b) {
        if (!(b % c)) {
            cout << c << " ";
        }
        c++;
    }
}