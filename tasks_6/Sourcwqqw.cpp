
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	str.erase(0, str.find(' ') + 1);
	str.erase(str.rfind(' '), str.size());
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 'k';
	}
	cout << str;
	return 0;
}