#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	cout << str.substr(0,str.find(' ')) << endl;
	return 0;
}