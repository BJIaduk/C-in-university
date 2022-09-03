#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, str_1, str_2, str_3;
	getline(cin, str);
	str_1 = str.substr(0, str.find(" ") + 1);
	str.erase(0, str.find(" ") + 1);
	str_2 = str.substr(0, 1);
	str.erase(0, str.find(" ") + 1);
	str_3 = str.substr(0, 1);
	cout << str_1 + str_2 + "." + str_3 + ".";
	return 0;
}
