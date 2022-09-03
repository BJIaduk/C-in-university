#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, str_0;
	int i = 0, l = 0; 
	getline(cin, str);
	str_0 = str;
	l = str.rfind(' ');
	if (str.find(' ') != str.rfind(' ')) {
		while (i < 2) {
			str.erase(str.rfind(' '), str.size() - str.rfind(' '));
			i++;
		}
		str_0.erase(str.size() + 1, l - str.size());
	}
	else
		str_0.erase(str.find(' '), str_0.size()- str.find(' '));
	cout << str_0;
	return 0;
}