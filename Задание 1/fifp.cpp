#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a1=5.4, a2=0, a3=85.6, a4=74.9, a5=5, a6=-1, a7=96.2, a8=12, a9=0;
    cout<<left<<setw(6)<<a1<<setw(6)<<a2<<setw(6)<<a3<<endl;                  //left - ориентация с левой стороны
    cout<<setw(6)<<a4<<setw(6)<<a5<<setw(6)<<a6<<endl;
    cout<<setw(6)<<a7<<setw(6)<<a8<<setw(6)<<a9<<setw(6)<<endl;
}