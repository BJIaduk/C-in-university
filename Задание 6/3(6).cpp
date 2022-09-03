#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int i, n = 0, k = 0;
	getline(cin, str);
	for (i = 0; i < str.size(); i++) {
		if (str[i] == 'c' || str[i] == 'C') {
			str[i] = int(str[i])+19;
			n++;
			i++;
		}
		if (str[i] == 'v' || str[i] == 'V') {
			str[i] = int(str[i]) - 19;
			k++;
		}
		else if (str[i] == 'c' || str[i] == 'C')
			i--;
	}
	cout << str << endl << n + k;
	return 0;
}