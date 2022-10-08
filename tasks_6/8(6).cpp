#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, str_0;
	char t;
	getline(cin, str);
	str_0 = str;
	for (int i = 0; i < str.size()-i; i++) {
		t = str[i];
		str[i] = str[str.size() - i -1];
		str[str.size()-i -1 ] = t;
	}
	if (str == str_0)
		cout << "yes";
	else
		cout << "no";
	return 0;
}