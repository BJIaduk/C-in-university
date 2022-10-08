#include <iostream>
#include <clocale>
using namespace std;
void pr(int *b);
int main()
{
    setlocale(LC_ALL,"Russian");
    int a;
    cin >> a;
    pr(&a);
    if (a) cout << "Число простое";
    else cout << "Не простое";
}
void pr(int *b)
{
    int c = 2;
    while (c <= *b) {
        if (!(*b % c) && (c < *b))
            *b = 0;
        else 
            *b = 1;
        c++;
    }
}