#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int i, n = 0, k = 0;
	getline(cin, str);
	for (i = 0; i < str.size(); i++) {
		if (str[i] == 'c') {
			str[i] = 'v';
			n++;
		}
		if (str[i] == 'C') {
			str[i] = 'V';
			k++;
		}
	}
	cout << str << endl << n + k;
	return 0;
}
