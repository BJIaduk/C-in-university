#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int n = 1;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ')
			n++;
	}
	if (str.size() == 0)
		cout << 0;
	else
		cout << n;
	return 0;
}