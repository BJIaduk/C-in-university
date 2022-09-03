#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '\\' ) {
			cout << str.substr(0, i) << endl;
			str.erase (0, i + 1);
			i = 0;
		}
	}
	cout << str << endl;
	return 0;
}